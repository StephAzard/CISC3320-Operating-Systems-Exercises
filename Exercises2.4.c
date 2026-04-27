/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.

void squeeze(char s[], int c)
{
int i, j;
for (i = j = 0; s[i] != '\0'; i++)
if (s[i] != c)
s[j++] = s[i];
s[j] = '\0';
}
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter the first string (s1): ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; 

    printf("Enter the second string (s2): ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0'; 
    
    int i, j;
    for (i = j = 0; s1[i] != '\0'; i++) {
        if (strchr(s2, s1[i]) == NULL) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0'; 
    printf("Result after squeezing: %s\n", s1);
    return 0;
}