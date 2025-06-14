#include<stdio.h>

int main(){
    char A[20], B[20], U[40], I[20], D[20];
    int n1, n2, flag;
    int k1 = 0, k2 = 0, k3 = 0;
    
    printf("This code is run by Aryan Maharjan\n");

    // Input set A
    printf("Enter the number of elements of set A: ");
    scanf("%d", &n1);
    printf("Enter the elements of set A: ");
    for (int i = 0; i < n1; i++) {
        scanf(" %c", &A[i]);  // space before %c ignores whitespace/newline
    }

    // Input set B
    printf("Enter the number of elements of set B: ");
    scanf("%d", &n2);
    printf("Enter the elements of set B: ");
    for (int i = 0; i < n2; i++) {
        scanf(" %c", &B[i]);
    }

    // Union
    for (int i = 0; i < n1; i++) {
        U[k1++] = A[i];
    }
    for (int i = 0; i < n2; i++) {
        flag = 0;
        for (int j = 0; j < n1; j++) {
            if (B[i] == A[j]) {  
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            U[k1++] = B[i];
        }
    }

    // Intersection
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                // Avoid duplicates in intersection
                flag = 0;
                for (int x = 0; x < k2; x++) {
                    if (I[x] == A[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (!flag) {
                    I[k2++] = A[i];
                }
                break;
            }
        }
    }

    // Difference (A - B)
    for (int i = 0; i < n1; i++) {
        flag = 0;
        for (int j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            D[k3++] = A[i];
        }
    }

    // Output
    printf("Union of A and B: ");
    for (int i = 0; i < k1; i++) {
        printf("%c", U[i]);
        if (i != k1 - 1) printf(", ");
    }
    printf("\n");

    printf("Intersection of A and B: ");
    for (int i = 0; i < k2; i++) {
        printf("%c", I[i]);
        if (i != k2 - 1) printf(", ");
    }
    printf("\n");

    printf("Difference of A and B: ");
    for (int i = 0; i < k3; i++) {
        printf("%c", D[i]);
        if (i != k3 - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
