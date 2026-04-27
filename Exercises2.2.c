/*
Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
*/

/*
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
s[i] = c;
*/
#include <stdio.h>

int main() {
    int i, lim, c;
    char s[100];
    lim = 100;

    i = 0;
    while (i < lim - 1) {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; 

    printf("Input: %s\n", s);
    return 0;
}