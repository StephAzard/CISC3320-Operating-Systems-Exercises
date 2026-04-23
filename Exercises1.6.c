/*
Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/
#include <stdio.h>
int main() {
    int c;
       c = getchar() != EOF;
       printf("%d\n", c);
       return 0;
    }
/* The output is 1 if the input is not EOF and 0 if the input is EOF. */