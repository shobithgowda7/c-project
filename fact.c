#include <stdio.h>

void fact() {
    int n, i;
    unsigned long long factorial = 1;  // To handle large results

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial of negative numbers doesn't exist
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    // return 0;
}
