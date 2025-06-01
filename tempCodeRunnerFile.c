#include<stdio.h>
#define max 100
int main(){
    int i,limit,num[max],sum=0,avg;
    printf("Enter the no of terms:\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
      scanf("%d",num[i]);
      sum=sum+num[i];
    }
    avg=sum/limit;
    printf("sum of your given number is%d",sum);
    printf("average of your numbers is %d",avg);
    return 0;
}