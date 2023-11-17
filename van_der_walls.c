#include <stdio.h>

double calculatePressure(double n, double T, double V) {
    double R = 0.08206;  // Gas constant Latm/mol-K
    double a = 3.592;    // Van der Waals constant a Latm/mol
    double b = 0.0427;   // Van der Waals constant b L/mol

    return (n * R * T) / (V - n * b) - (a * n * n) / (V * V);
}

int main() {
    double n, T, V_initial, V_final;

    printf("Enter number of moles (n): ");
    scanf("%lf", &n);

    printf("Enter temperature in Kelvin (T): ");
    scanf("%lf", &T);

    printf("Enter initial volume in liters (V_initial): ");
    scanf("%lf", &V_initial);

    printf("Enter final volume in liters (V_final): ");
    scanf("%lf", &V_final);

    
    FILE *file = fopen("pressure_volume_table.txt", "w");
    if (file == NULL) {
        printf("Could not create file.\n");
        return 1;
    }

    fprintf(file, "Volume (L)\tPressure (atm)\n");

    double V;
    for (V = V_initial; V <= V_final; V += 1.0) {
        double P = calculatePressure(n, T, V);
        fprintf(file, "%.2f\t%.4f\n", V, P);
    }

    fclose(file);
    printf("Table written to pressure_volume_table.txt\n");

    return 0;
}

