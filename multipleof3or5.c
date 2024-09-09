#include <stdio.h>
#include <stdlib.h>
void addElement(int** array, int* size, int* capacity, int value) {
    if (*size >= *capacity) {
        *capacity = 2 * (*capacity) + 1;
        *array = realloc(*array, (*capacity) * sizeof(int));
        if (*array == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
    (*array)[*size] = value;
    (*size)++;
}
int main() {
    int initial_capacity = 2;
    int capacity = initial_capacity;
    int size = 0;
    int* dynamic_array = malloc(capacity * sizeof(int));
    if (dynamic_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int value = 1;
    while (value < 1000) {
        if (value % 3 == 0 || value % 5 == 0) {
            addElement(&dynamic_array, &size, &capacity, value);
        }
        value += 1;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += dynamic_array[i];
    }
    printf("The sum of all multiples of 3 & 5 between 1 and 1000 is %d\n", sum);
    free(dynamic_array);
    return 0;
}