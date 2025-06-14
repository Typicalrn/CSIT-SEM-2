#include <stdio.h>

int main() {
    // Initialize binary values of P and Q
    char p[]={'F','F','T','T'};
    int a[]={0,0,1,1};
    char q[]={'F','T','F','T'};
    int b[]={0,1,0,1};

    // Header row
    printf("p\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q\tp xor q\n");
    printf("-------------------------------------------------------------\n");

    // Loop through each row
    for (int i = 0; i < 4; i++) {
        // Negations
        char not_p = (a[i] == 0) ? 'T' : 'F';
        char not_q = (b[i] == 0) ? 'T' : 'F';

        // Conjunction
        char and = (a[i] == 1 && b[i] == 1) ? 'T' : 'F';

        // Disjunction
        char or = (a[i] == 1 || b[i] == 1) ? 'T' : 'F';

        // Implication: (!p || q)
        char implication = (!a[i] || b[i]) ? 'T' : 'F';

        // Bi-implication: (!p || q) && (p || !q)
        char bi_implication = ((!a[i] || b[i]) && (a[i] || !b[i])) ? 'T' : 'F';

        // Exclusive OR
        char xor = ((a[i] == 1 && b[i] == 0) || (a[i] == 0 && b[i] == 1)) ? 'T' : 'F';

        // Print row
        printf("%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",
            p[i], q[i], not_p, not_q, and, or, implication, bi_implication, xor);
    }

    return 0;
}
