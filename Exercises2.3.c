/*
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char hexString[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexString);

    int result = 0;
    int i = 0;
    if (hexString[0] == '0' && (hexString[1] == 'x' || hexString[1] == 'X')) {
        i = 2;
    }

    for (; hexString[i] != '\0'; i++) {
        char c = hexString[i];
        if (isdigit(c)) {
            result = result * 16 + (c - '0');
        } else if (isxdigit(c)) {
            result = result * 16 + (tolower(c) - 'a' + 10);
        } else {
            printf("Invalid hexadecimal digit: %c\n", c);
            return 1; 
        }
    }

    printf("The integer value is: %d\n", result);
    return 0;
}