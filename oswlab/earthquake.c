#include <stdio.h>

void characterizeEarthquake(double richterScaleNumber) {
    printf("Richter Scale Number: %.1f\nCharacterization: ", richterScaleNumber);

    int intRichter = (int)richterScaleNumber;
    double decimalPart = richterScaleNumber - intRichter;

    switch (intRichter) {
        case 0 ... 4:
            printf("Little or no damage\n");
            break;
        case 5:
            if (decimalPart < 0.5)
                printf("Some damage\n");
            else
                printf("Serious damage: walls may crack or fall\n");
            break;
        case 6:
            if (decimalPart < 0.5)
                printf("Serious damage: walls may crack or fall\n");
            else
                printf("Disaster: houses and buildings may collapse\n");
            break;
        default:
            printf("Catastrophe: most buildings destroyed\n");
            break;
    }
}

int main() {
    characterizeEarthquake(4.8);
    characterizeEarthquake(5.2);
    characterizeEarthquake(6.0);
    characterizeEarthquake(7.8);

    return 0;
}

