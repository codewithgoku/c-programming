// smallest to largest
#include<stdio.h>
#define max 100
int main(){
    int limit,i,j;
    float num[max],temp;
    printf("Enter how many numbers you enter:\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        printf("enter your number%d:\n",i);
        scanf("%f",&num[i]);
    }
    for(i=0;i<=limit-1;i++){
        for(j=i+1;j<=limit;j++){
            if(num[j]<num[i])
           { temp=num[i];
            num[i]=num[j];
            num[j]=temp;}
        }
    }
    for(i=1;i<=limit;i++)
    printf("short array is%d\n%f\n",i,num[i]);
    return 0;
}