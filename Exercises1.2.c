/* 
Exercise 1-2. Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above.
*/
#include <stdio.h>
int main()
{
printf("hello, \c world");
printf("world");
printf("\n");
return 0;
}
/* Warning pops up as \c is an unknown escape sequence. 
The output is "hello, c worldworld" 
followed   by a newline.
*/