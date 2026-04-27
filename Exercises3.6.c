/*
Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
argument is a minimum field width; the converted number must be padded with blanks on the
left if necessary to make it wide enough.
*/
#include <stdio.h>
#include <string.h>

void itoa(int n, char s[], int width) {
    int i, sign;
    unsigned int un;
    sign = n;
    if (n < 0) {
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
    
    while (i < width) {
        s[i++] = ' ';
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