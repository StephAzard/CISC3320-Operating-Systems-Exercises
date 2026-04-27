/*
Exercise 3-4. In a two's complement number representation, our version of itoa does not
handle the largest negative number, that is, the value of n equal to -(2wordsize-1). Explain why not.
Modify it to print that value correctly, regardless of the machine on which it runs.

void itoa(int n, char s[])
{
int i, sign;
if ((sign = n) < 0) n = -n; i = 0;
do { /* record sign */
/* make n positive */
/* generate digits in reverse order 
s[i++] = n % 10 + '0'; /* get next digit 
} while ((n /= 10) > 0); /* delete it 
if (sign < 0)
s[i++] = '-';
s[i] = '\0';
reverse(s);
}
*/

#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]) {
    int i, sign;
    unsigned int un; 
    sign = n; 
    if (n < 0) { 
        /* This handles the largest negative number case because it converts it to an unsigned integer
        which can represent the positive equivalent.
        */
        un = -(unsigned int)n; 
    } else {
        un = (unsigned int)n;
    }
    
    i = 0;
    do {
        s[i++] = un % 10 + '0';
    } while ((un /= 10) > 0); 
    
    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    int j, k;
    char temp;
    for (j = 0, k = i - 1; j < k; j++, k--) {
        temp = s[j];
        s[j] = s[k];
        s[k] = temp;
    }
}