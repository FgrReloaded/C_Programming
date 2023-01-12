// WAP to count frequency of each element of array.

#include <stdio.h>

void main() {
    int n, i, j, count;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }
        }
        if (arr[i] != -1) {
            printf("%d appears %d times\n", arr[i], count);
        }
    }

     0;
}
