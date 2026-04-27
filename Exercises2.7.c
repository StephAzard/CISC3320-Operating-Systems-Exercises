/*
Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/
#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1U << n) - 1) << (p - n + 1);
    return x ^ mask; 
}