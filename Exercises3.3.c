/*
Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case
and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
leading or trailing - is taken literally.
*/
#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[]){
    int i, j, k;
    i = j =0;
    while(s1[i] != '\0'){
       if(s1[i] =='a' && s1[i+1] == '-' && s1[i+2] == 'z'){
            for(k ='a'; k <= 'z'; k++){
                s2[j++] = k;
            }
            i += 2;
        } else if(s1[i] == 'A' && s1[i+1] == '-' && s1[i+2] == 'Z'){
            for(k = 'A'; k <= 'Z'; k++){
                s2[j++] = k;
            }
            i += 2;
        } else if(s1[i] == '0' && s1[i+1] == '-' && s1[i+2] == '9'){
            for(k = '0'; k <= '9'; k++){
                s2[j++] = k;
            }
            i += 2;
        } else {
            s2[j++] = s1[i];
        }
        i++;
    }
}
