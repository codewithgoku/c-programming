// reverse order
/*
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main() {
    int i, j, n;
     printf("Enter the no of rows\n");
     scanf("%d",&n);
        for(i = n-2; i >= 0; i--) {
        for(j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        for(j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            printf(" ");
        }
        for(j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
