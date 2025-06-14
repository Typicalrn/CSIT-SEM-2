#include <stdio.h>

int main() {
    int r, c;   
    printf("Program ran by-Aryan Maharjan\n");
    // Step 1: Input dimensions
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c], join[r][c], meet[r][c];
    // Step 2: Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Step 3: Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // Step 4: Display matrices A and B
    printf("\nMatrix A:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    // Step 6: Perform Join and Meet operations
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            join[i][j] = a[i][j] || b[i][j]; // Logical OR
            meet[i][j] = a[i][j] && b[i][j]; // Logical AND
        }
    }
    // Step 7: Display Join matrix
    printf("\nJoin Matrix (A OR B):\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", join[i][j]);
        }
        printf("\n");
    }
    // Step 7: Display Meet matrix
    printf("\nMeet Matrix (A AND B):\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", meet[i][j]);
        }
        printf("\n");
    }
    return 0;
}
