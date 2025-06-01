#include<stdio.h>
#define max 100
int main(){
    int limit,i;
    float num[max],sum=0,avg;
    printf("Enter the no of terms:\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
      printf("enter the numbers%d:\n",i);
      scanf("%f",&num[i]);
      sum=sum+num[i];
    }
    avg=sum/limit;
    printf("sum of your given number is%f:\n",sum);
    printf("average of your numbers is %f:\n",avg);
    return 0;
}
