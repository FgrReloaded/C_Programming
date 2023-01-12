// WAP to use realloc using dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = (int*) malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Error allocating memory\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    array = (int*) realloc(array, 10 * sizeof(int));
    if (array == NULL) {
        printf("Error reallocating memory\n");
        return 1;
    }

    for (int i = 5; i < 10; i++) {
        array[i] = i;
    }

    printf("New array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array); 
}
