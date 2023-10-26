
#include <stdio.h>

int max(int *arr, int size) {
    int maximum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = max(arr, 20);
    printf("Maximum value in the array: %d\n", max_val);

    return 0;
}

