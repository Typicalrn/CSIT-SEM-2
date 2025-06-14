#include <stdio.h>

// Function to compute Extended Euclidean Algorithm
int extendedGCD(int a, int b, int *x, int *y) {
    // Base case
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1; // To store results of recursive call
    int gcd = extendedGCD(b, a % b, &x1, &y1);

    // Update x and y using results of recursion
    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b, x, y;
    printf("This code is run by Aryan Maharjan\n");
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int gcd = extendedGCD(a, b, &x, &y);

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("Bezout coefficients: x = %d, y = %d\n", x, y);
    printf("Verification: %d*%d + %d*%d = %d\n", a, x, b, y, a*x + b*y);

    return 0;
}
