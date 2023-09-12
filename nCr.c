#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r, a, b, c, result;

    printf("Enter the values for n and r: ");
    scanf("%d%d", &n, &r);

    if (n < r) {
        printf("Error: r cannot be greater than n\n");
        return 1;  // Exit with an error code
    }

    a = factorial(n);
    b = factorial(n - r);
    c = factorial(r);

    result = a / (b * c);

    printf("The final result is %d\n", result);

    return 0;
}
