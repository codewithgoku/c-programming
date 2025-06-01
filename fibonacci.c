// fibonacci series without recursion


#include<stdio.h>
int main()
{
int i,n,t1=0,t2=1,sum=t1+t2;

printf("enter your nth terms\t");
scanf("%d",&n);
printf("%d \t %d \t",t1,t2);
for(i=3;i<=n;i++)
{
    printf("%d \t",sum);
    t1=t2;
    t2=sum;
    sum=t1+t2;
}

return 0;
}