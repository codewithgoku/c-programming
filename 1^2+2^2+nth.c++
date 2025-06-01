#include<stdio.h>
int main()
{
int n,sum=0,i,j;
printf("Enter your n th number\t");
scanf("%d",&n);
sum=(n*(n+1)*(2*n+1))/6;
printf("sum of series:");
for(i=1;i<=n;i++)
{
    if(i!=n)
    
        printf("%d^2 +",i);
        else
        printf("%d^2 =%d",i,sum);
        
    
}
return 0;
}