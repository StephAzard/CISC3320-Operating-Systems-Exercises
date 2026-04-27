/*
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integerx rotated
to the right by n positions.
*/
#include <stdio.h>

unsigned rightrot(unsigned x, int n) {
    int word_size = sizeof(unsigned) * 8; // change bits into bytes
    n = n % word_size;
    if (n == 0) {
        return x;
    }
    return (x >> n) | (x << (word_size - n));
}