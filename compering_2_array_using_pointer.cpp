// compering 2 array using pointer
#include<stdio.h>
#define MAX 20
int main()
{
int arr_1[MAX],arr_2[MAX],i,n,count=0;
printf("How much number you want to give(max limt 20):\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter your first list given numbers %d:\n",i+1);
    scanf("%d",&arr_1[i]);
    printf("enter your second list given numbers %d:\n",i+1);
    scanf("%d",&arr_2[i]);
}
for(i=0;i<n;i++)
{
    if(*(arr_1+i)==*(arr_2+i))
    {
        count++;
    }
    printf("\n the number of matches is %d",count);
}

return 0;
}