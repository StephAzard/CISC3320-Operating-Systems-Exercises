/*
Exercise 1-12: Write a program that prints its input one word per line.
*/
#include <stdio.h>
main() {
    int c, state;
    state = 0; // 0 means outside a word, 1 means inside a word
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == 'n') {
            state = 0;
        }
        else if(state == 0) {
            state = 1;
            putchar('\n');
        }
        putchar(c);
    }
}