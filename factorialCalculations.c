#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if the number is negative, zero, or positive
    if (n < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        for(i = 1; i <= n; ++i) {
            factorial *= i;  // factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

