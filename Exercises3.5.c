/*
Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.
*/
#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]) {
    int i, sign;
    unsigned int un;
    sign = n;
    if ( n < 0) {
        un = -(unsigned int)n;
    } else {
        un = (unsigned int)n;
    }
    i = 0;
    do {
        s[i++] = un % 10 + '0';
    } while((un /= 10) > 0);
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