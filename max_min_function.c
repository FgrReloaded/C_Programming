// WAP to find maximum and minimum using function


#include <stdio.h>

void min_max(int num1, int num2, int *min, int *max) {
    if (num1 > num2) {
        *max = num1;
        *min = num2;
    } else {
        *max = num2;
        *min = num1;
    }
}

int main() {
    int num1, num2, min, max;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    min_max(num1, num2, &min, &max);

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
