#include <stdio.h>

int second_largest(int arr[], int size) {
    int i, max1, max2;

    max1 = max2 = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    return max2;
}

void main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int second_largest_element = second_largest(arr, n);
    printf("Second largest element in the array: %d\n", second_largest_element);

}
