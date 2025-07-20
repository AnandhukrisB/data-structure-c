#include <stdio.h>

int main() {

    int m = 3, n = 3;
    int a[4][4];
    int b[4][4];

    printf("*********This is a 3 x 3 matrix**********");

    printf("\nEnter the elements in matrix A: \n\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements in matrix B: ");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix A:\n ");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n ");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nTriplet form: \n\n");

    printf("\nMatrix A:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(a[i][j] == 0) {
                continue;
            }
            else {
                printf("[%d %d %d]\n", i, j, a[i][j]);
            }
        }
    }

    printf("\nMatrix B:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(b[i][j] == 0) {
                continue;
            }
            else {
                printf("[%d %d %d]\n", i, j, b[i][j]);
            }
        }
    }

    return 0;
}