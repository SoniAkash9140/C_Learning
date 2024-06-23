#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate permutation
long long permutation(int n, int r) {
    return factorial(n) /factorial(n - r);
}

// Function to calculate combination
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n (total number of items): ");
    scanf("%d", &n);
    printf("Enter the value of r (number of items to choose): ");
    scanf("%d", &r);

    printf("Permutation (P(%d, %d)) = %lld\n", n, r, permutation(n, r));
    printf("Combination (C(%d, %d)) = %lld\n", n, r, combination(n, r));

    return 0;
}
