#include <stdio.h>

long factorial(int n) {
  if (n == 0) return 1;
  long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++) {
    // Print spaces for alignment
    for (int space = 0; space < rows - i; space++) {
      printf(" ");
    }

    for (int j = 0; j <= i; j++) {
      long coefficient = factorial(i) / (factorial(j) * factorial(i - j));
      printf("%ld ", coefficient); // Use %4ld for better formatting
    }
    printf("\n");
  }
  return 0;
}