
#include<stdio.h>
void printpattern(int n);
int main()
{ int n=4;
printpattern(n);
return 0;
}
void printpattern(int n)
{ int i=0;
    if(n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(i=0;i<(2*n-1);i++){
    printf("*");
    }
    printf("\n");
}