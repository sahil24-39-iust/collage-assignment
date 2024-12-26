#include <stdio.h>

int main() {
    int n, search, found = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &search);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("Element %d found at index %d.\n", search, i);
            break; // Exit the loop once the element is found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}