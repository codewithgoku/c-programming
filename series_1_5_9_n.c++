// write a c program to print the given series 1,5,9,...n where n is upper limit

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The series is: ");
    for(i = 1; i <= n; i += 4) {
        printf("%d ", i);
    }
    return 0;
}
