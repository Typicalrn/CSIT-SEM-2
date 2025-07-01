#include <stdio.h>

void TOH(int n, char src, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }

    // Move n-1 disks from src to aux
    TOH(n - 1, src, dest, aux);

    // Move the nth disk from src to dest
    printf("Move disk %d from %c to %c\n", n, src, dest);

    // Move the n-1 disks from aux to dest
    TOH(n - 1, aux, src, dest);
}

int main() {
    int n;

    printf("Program ran by-Aryan Maharjan\n");
    printf("Enter number of disks: ");
    scanf("%d", &n);

    TOH(n, 'A', 'B', 'C'); // A = src, B = auxiliary, C = destination

    return 0;
}
