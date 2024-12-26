#include <stdio.h>

int main() {
    int n, i = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= n) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}