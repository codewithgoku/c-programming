// check the matrix is identity martix yes or no
#include<stdio.h>
#define row 10
#define col 10
int main(){
    int num[row][col],i,j,r,c,counter=0;
    printf("how many rows:\n");
    scanf("%d",&r);
    printf("how many colums:\n");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("enter the martix A[%d][%d]",i+1,j+1);
        scanf("%d",&num[i][j]);
    }
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%4d",num[i][j]);}
        printf("\n");
    }
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j  && num[i][j]!=1){
            counter=1;
            break;
        }
        if(i!=j && num[i][j]!=0){
            counter=1;
            break;
       }
    }
    if(counter==1)
    break;
    }
    if(counter==0)
    printf("\n indentity matrix");
    else
    printf("\n not identity matrix");
    return 0;
}