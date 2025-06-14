#include <stdio.h>

int main() {
    int n;
    printf("Program ran by-Aryan Maharjan\n");
    // Step 1: Input number of bits
    printf("Enter number of bits: ");
    scanf("%d", &n);
    int a[n], b[n], s[n];
    int c = 0; // carry
    // Read binary number a
    printf("Enter binary number a (space-separated bits): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Read binary number b
    printf("Enter binary number b (space-separated bits): ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    // Step 3: Binary addition from LSB to MSB
    for(int i = n - 1; i >= 0; i--) {
        int sum = a[i] + b[i] + c;

        if(sum == 0) {
            s[i] = 0;
            c = 0;
        } else if(sum == 1) {
            s[i] = 1;
            c = 0;
        } else if(sum == 2) {
            s[i] = 0;
            c = 1;
        } else if(sum == 3) {
            s[i] = 1;
            c = 1;
        }
    }
    // Step 4: Output
    printf("Sum: ");
    if(c == 1) {
        printf("1");
    }
    for(int i = 0; i < n; i++) {
        printf("%d", s[i]);
    }
    printf("\n");
    return 0;
}
