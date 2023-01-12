// WAP to delete element from array

#include <stdio.h>

void delete_element(int *arr, int size, int index) {
    int i;
    for (i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int n, i, index;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        delete_element(arr, n, index);
        printf("Array after deletion: ");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid index\n");
    }
    return 0;
}
