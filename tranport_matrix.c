// trasport matrix of sq matrix
#include<stdio.h>
#define row 10
# define col 10
int main(){
    int num1[row][col],temp,i,j,r,c;
    printf("how many rows:\n");
    scanf("%d",&r);
    printf("how many colums:\n");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("enter the matrix A[%d][%d]",i+1,j+1);
        scanf("%d",&num1[i][j]);
    }
    printf("\n the original matrix:\n");
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%4d\t",num1[i][j]);}
        printf("\n");
    }
     for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        if(i<j)
        {
            temp=num1[i][j];
            num1[i][j]=num1[j][i];
            num1[j][i]=temp;
        }
    }
    printf("the transport matrix:\n");
     for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%4d\t",num1[i][j]);}
        printf("\n");
    }
    return 0;
}