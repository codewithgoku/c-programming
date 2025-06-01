/* trigonal like as 
     *
    ***
   *****
  *******
*/
#include<stdio.h>
int main()
{
int n,i,k,space;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(space=i;space<=n-1;space++)
    {
        printf(" ");
    }
   for(k=1;k<=2*i-1;k++)
    {
        printf(" * ");
        

    }
    printf("\n");
}
return 0;
}