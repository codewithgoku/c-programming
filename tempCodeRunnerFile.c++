#include<stdio.h>
int fibonacci(int a);
int main()
{
    int a;
    printf("Enter the number to start fibonacci series \n:");
    scanf("%d",&a);
    // b=fibonacci(a);
    printf("the fibonacci series is %d \n",fibonacci(a));
    return 0;

}

int fibonacci(int a)
{
    if(a==0||a==1)
    {
        return a;
    }
    else{
        a=fibonacci(a-1)+fibonacci(a-2);
        return a;
    }
}