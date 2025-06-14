#include <stdio.h>

int main() {
    // Initialize binary values of P and Q
    char p[]={'F','F','T','T'};
    char q[]={'F','T','F','T'};

    // Header row
    printf("Program ran by-Aryan Maharjan\n");
    printf("p\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q\tpXORq\n");
    printf("-----------------------------------------------------------------------\n");

    // Loop through each row
    for (int i = 0; i < 4; i++) {
        // Negations
        char not_p = (p[i] == 'F') ? 'T' : 'F';
        char not_q = (q[i] == 'F') ? 'T' : 'F';

        // Conjunction
        char and = (p[i] == 'T' && q[i] == 'T') ? 'T' : 'F';

        // Disjunction
        char or = (p[i] == 'T' || q[i] == 'T') ? 'T' : 'F';

        // Implication: (!p || q)
        char imp = (!p[i] || q[i]) ? 'T' : 'F';

        // Bi-implication: (!p || q) && (p || !q)
        char bi_imp = ((!p[i] || q[i]) && (p[i] || !q[i])) ? 'T' : 'F';

        // Exclusive OR
        char xor = ((p[i] == 'T' && q[i] == 'F') || (p[i] == 'F' && q[i] == 'T')) ? 'T' : 'F';

        // Print row
        printf("%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",
            p[i], q[i], not_p, not_q, and, or, imp, bi_imp, xor);
    }

    return 0;
}
