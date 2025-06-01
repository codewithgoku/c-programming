// sum of two matrix

#include<stdio.h>
#define MAX 10
int main()
{
int mat[MAX][MAX],mat1[MAX][MAX],sum[MAX][MAX],i,j,n;
printf("\n Enter the number of rows and colum :\n");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
        printf("\nenter your first matris elements[%d][%d]:",i,j);
        scanf("%d",&mat[i][j]);
        printf("\nenter your second matrix elements[%d][%d]:",i,j);
        scanf("%d",&mat1[i][j]);
        sum[i][j]=mat[i][j]+mat1[i][j];
    }
 }
    printf("\n your frist matrix is:\n");
    for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
 }
 printf("\n your second matrix is:\n");
  for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
    {
        printf("%d\t",mat1[i][j]);
    }
    printf("\n");
 }
   printf("\n The addtion matrix is:\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
       printf("%d\t",sum[i][j]);
       }
    printf("\n");
   }
return 0;
}