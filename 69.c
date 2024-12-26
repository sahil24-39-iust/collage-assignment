#include <stdio.h>

// Function to sort the array using pointers
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) { // Compare elements using pointers
                // Swap elements using pointers
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Function to print the array
void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {42, 15, 8, 23, 4, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // Sort the array
    sortArray(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}