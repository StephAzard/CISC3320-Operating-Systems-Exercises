/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/
#include <stdio.h>
int main() {
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++blanks;
        else if(c == '\t')
            ++tabs;
        else if(c == '\n')
            ++newlines;
    }
    printf("Blanks: %d, Tabs: %d, Newlines: %d\n", blanks, tabs, newlines);
}