// WAP to concat two string without using strcat in c


#include <stdio.h>
#include <string.h>

int main()
{
    char first[100], second[100], result[200];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", first);

    printf("Enter second string: ");
    scanf("%s", second);

    for (i = 0; first[i] != '\0'; i++)
    {
        result[i] = first[i];
    }

    for (j = 0; second[j] != '\0'; j++)
    {
        result[i + j] = second[j];
    }

    result[i + j] = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
