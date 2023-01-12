// WAP to count length of string in c without using strlen

#include <stdio.h>

void main() {
    char str[100];
    int count = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("The length of the string is %d characters.\n", count);
}
