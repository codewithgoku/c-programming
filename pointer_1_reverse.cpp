#include<stdio.h>
#define MAX 20
int main()
{
int num [MAX],i,j,n,temp;
printf("enter the number of list:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter your element%d:\n",i);
    scanf("%d",&num[i]);
}
for ( i = 0,j=(n-1);i<(n/2);i++,j--)
{
    temp=num[i];
    num[i]=num[j];
    num[j]=temp;

}
for(i=0;i<n;i++)
{
    printf("\n element%d of reversed array %d",i,num[i]);
}

return 0;
}