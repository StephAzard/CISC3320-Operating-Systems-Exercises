/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/
#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0; upper = 300; step = 20; /* lower limit of temperatuire scale */
/* upper limit */
/* step size */
fahr = lower;
printf("Celsius Fahrenheit \n");
while (celsius <= upper) {
fahr = (9.0 / 5.0) * celsius + 32.0;
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius + step;
}
return 0;
}