/*trigonal star print like as

*
**
***
****
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
   {    printf("%d",j);   /*if you want print question pattern than replace this line by this printf("*");*/
                         /* if you want
                         1
                         11
                         111
                         1111 then replace this line by printf("1");*/
   }
   printf("\n");
}
return 0;
}