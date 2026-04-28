/*
Exercise 4-2. Extend atof to handle scientific notation of the form

/* atoi: int atoi(char s[])
convert string s to integer using atof 
{
double atof(char s[]);
return (int) atof(s);
}
*/
#include <stdio.h>
#include <string.h>

double atof(char s[]) {
    double val, power;
    int i,sign,exp_sign,exp_val;
    for (i = 0; s[i] == ' ' || s[i] == '\t'; i++);
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (val = 0.0; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.') {
        i++;
    }
    for (power = 1.0; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-') {
            i++;
        }
    }
    for (exp_val = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        exp_val = 10 * exp_val + (s[i] - '0');
    }
    if (exp_sign == -1) {
        while (exp_val-- > 0) {
            power *= 10.0;
        }
    } else {
        while(exp_val-- > 0) {
            power /= 10.0;
        }
    }
    return sign * val / power;
}