#include <stdio.h>
#include <stdlib.h>

int main() {
    int row1, col1, row2, col2;

    scanf("%d %d", &row1, &col1);

    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int **matrix1, **matrix2, **result;

    matrix1 = (int **)malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        matrix1[i] = (int *)malloc(col1 * sizeof(int));
    }

    matrix2 = (int **)malloc(row2 * sizeof(int *));
    for (int i = 0; i < row2; i++) {
        matrix2[i] = (int *)malloc(col2 * sizeof(int));
    }

    result = (int **)malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        result[i] = (int *)malloc(col2 * sizeof(int));
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < row2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (int i = 0; i < row1; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
