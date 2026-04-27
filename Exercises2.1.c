/*
 Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf(" Ranges from Standard Headers \n");
    
    printf("Ranges of char:\n");
    printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char: 0 to %d\n", UCHAR_MAX);

    printf("\nRanges of short:\n");
    printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: 0 to %d\n", USHRT_MAX);

    printf("\nRanges of int:\n");
    printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: 0 to %u\n", UINT_MAX);

    printf("\nRanges of long:\n");
    printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long: 0 to %lu\n", ULONG_MAX);

    printf("\nRanges of float and double:\n");
    printf("Minimum positive normal float: %e\n", FLT_MIN);
    printf("Maximum float: %e\n", FLT_MAX);
    printf("Minimum positive normal double: %e\n", DBL_MIN);
    printf("Maximum double: %e\n", DBL_MAX);

    printf("\n--- RANGES BY DIRECT COMPUTATION ---\n");

    printf("Ranges of char:\n");
    printf("Signed char: %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)((unsigned char)~0 >> 1));
    printf("Unsigned char: 0 to %u\n", (unsigned char)~0);

    printf("\nRanges of short:\n");
    printf("Signed short: %d to %d\n", -(short)((unsigned short)~0 >> 1) - 1, (short)((unsigned short)~0 >> 1));
    printf("Unsigned short: 0 to %u\n", (unsigned short)~0);

    printf("\nRanges of int:\n");
    printf("Signed int: %d to %d\n", -(int)((unsigned int)~0 >> 1) - 1, (int)((unsigned int)~0 >> 1));
    printf("Unsigned int: 0 to %u\n", (unsigned int)~0);

    printf("\nRanges of long:\n");
    printf("Signed long: %ld to %ld\n", -(long)((unsigned long)~0 >> 1) - 1, (long)((unsigned long)~0 >> 1));
    printf("Unsigned long: 0 to %lu\n", (unsigned long)~0);

    return 0;
}