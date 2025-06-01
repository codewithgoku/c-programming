// fibonacci series using recursive function

#include <stdio.h>

// Recursive function to calculate the nth term of the Fibonacci sequence
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2); // recursive function
    }
}

int main() {
    int num_terms, i;
    printf("Enter the number of terms to generate: ");
    scanf("%d", &num_terms);
    printf("Fibonacci sequence:\n");
    for (i = 0; i < num_terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
