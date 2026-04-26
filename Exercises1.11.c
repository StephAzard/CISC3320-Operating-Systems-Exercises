/*
Exercise 1-11:How would you test the word count program? 
What kinds of input are most
likely to uncover bugs if there are any?
*/
#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
main()
{
int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {
++nc;
if (c == '\n')
++nl;
if (c == ' ' || c == '\n' || c == '\t')
state = OUT;
else if (state == OUT) {
state = IN;
++nw;
}
}
printf("%d %d %d\n", nl, nw, nc);
}
/*
When testing the count program, I test whitespace, zeros, and words with no new line
at the end. I also test with a large input to see if it can handle it without crashing.
The output should be correct for all of these cases, and if there are any bugs, 
they are likely to be uncovered by these tests.
*/