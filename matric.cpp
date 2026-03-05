#include <stdio.h>
int main() {
int A[2][2], B[2][2];
int add[2][2], sub[2][2], mul[2][2];
printf("Enter elements of Matrix A (2x2):\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        scanf("%d", &A[i][j]);
    }
}
printf("\nEnter elements of Matrix B (2x2):\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        scanf("%d", &B[i][j]);
    }
}
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        add[i][j] = A[i][j] + B[i][j];
        sub[i][j] = A[i][j] - B[i][j];
    }
}
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        mul[i][j] = 0;
        for (int k = 0; k < 2; k++) {
            mul[i][j] += A[i][k] * B[k][j];
        }
    }
}
printf("\nMatrix A:\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", A[i][j]);
    }
    printf("\n");
}
printf("\nMatrix B:\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", B[i][j]);
    }
    printf("\n");
}
printf("\nMatrix Addition (A+B):\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", add[i][j]);
    }
    printf("\n");
}
printf("\nMatrix Subtraction (A-B):\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", sub[i][j]);
    }
    printf("\n");
}
printf("\nMatrix Multiplication (AxB):\n");
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%d ", mul[i][j]);
    }
    printf("\n");
}
return 0;
}
