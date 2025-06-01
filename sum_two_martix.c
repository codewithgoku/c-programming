// sum of two martix
#include<stdio.h>
#define row 10
#define col 10
int main(){
    int num1[row][col],num2[row][col],sum[row][col],i,j,r,c;
    printf("how many rows:\n");
    scanf("%d",&r);
    printf("how many colums:\n");
    scanf("%d",&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("enter first martixA[%d][%d]:",i+1,j+1);
            scanf("%d",&num1[i][j]);
            printf("enter second martixB[%d][%d]:",i+1,j+1);
            scanf("%d",&num2[i][j]);
            sum[i][j]=num1[i][j]+num2[i][j];
            
        }
   
    printf("sum of martix is:\n");
       for(i=0;i<r;i++){
        for(j=0;j<c;j++){
              printf("%4d\t",sum[i][j]);}
              printf("\n");
        }
    
 
    return 0;
}