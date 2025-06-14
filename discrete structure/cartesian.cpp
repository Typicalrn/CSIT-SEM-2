#include <stdio.h>

int main() {
    // Step 1: Declare arrays and variables
    char A[100], B[100];
    int m, n;
    int i, j;

    printf("This code is run by Aryan Maharjan\n");
    printf("Enter the number of elements of set A:");
    scanf("%d",&m);
    printf("Enter the elements of set A:");
    for (int i = 0; i < m; i++)
    {
        scanf(" %c",&A[i]);
    }
    while ((getchar()) != '\n');
    printf("Enter the number of elements of set B:");
    scanf(" %d",&n);
    printf("Enter the elements of set B:");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&B[i]);
    }

    // Step 4: Display Cartesian Product
    printf("The Cartesian Product of Set A and Set B is: {");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("(%c, %c)", A[i], B[j]);
            if (!(i == m - 1 && j == n - 1)) {
                printf(", ");
            }
        }
    }

    printf("}\n");

    return 0;
}
