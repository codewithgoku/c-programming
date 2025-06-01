//  factorial using recursive function

#include <stdio.h>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1); //recursive function
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}