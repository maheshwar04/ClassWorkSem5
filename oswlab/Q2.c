#include <stdio.h>

struct element_t {
    int atomic_number;
    char name[50];
    char chemical_symbol[3];
    char class[20];
    double atomic_weight;
    int electrons_in_shell[7];
};

int main() {
    struct element_t sodium;
    struct element_t *sodium_ptr = &sodium; 


    scanf("%d", &sodium_ptr->atomic_number); 

    scanf("%s", sodium_ptr->name);

    scanf("%s", sodium_ptr->chemical_symbol);

    scanf("%s", sodium_ptr->class);

    scanf("%lf", &sodium_ptr->atomic_weight);

    for (int i = 0; i < 7; i++) {
        scanf("%d", &sodium_ptr->electrons_in_shell[i]);
    }

    printf("\n");

    printf("Atomic Number: %d\n", sodium_ptr->atomic_number); 
    printf("Name: %s\n", sodium_ptr->name);
    printf("Chemical Symbol: %s\n", sodium_ptr->chemical_symbol);
    printf("Class: %s\n", sodium_ptr->class);
    printf("Atomic Weight: %.4lf\n", sodium_ptr->atomic_weight);

    printf("Electrons in Shells: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", sodium_ptr->electrons_in_shell[i]);
    }
    printf("\n");

    return 0;
}

