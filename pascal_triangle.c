// pascal_triangle

#include<stdio.h>
int main()
{
int rows,sum=1,space,i,j;
printf("enter the number of rows:");
scanf("%d",&rows);
printf("%14d",sum);
printf("\n");
for(i=1;i<=rows;i++)
{
    for(space=1;space<=rows-i;space++)
{
    printf("  ");

}
 for(j=0;j<=i;j++)
 {
    if(j==0 || i==0)
    sum=1;
    else
    sum=sum*(i-j+1)/j;
    printf("%4d",sum);
 }
 printf("\n");
}
return 0;
}