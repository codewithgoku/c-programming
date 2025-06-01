#include<stdio.h>
int main()
{
int a,b,c;
printf("enter your three numbers:\t");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&a==c)
  
    printf("given numbers are equal");
    else
    {
       if(a>b&&a>c)
       printf("%d large ",a);
       else if(b>a&&b>c)
       printf("%d large",c);
       if(c>a&&c>b)
       printf("%d large",c);
    }
    
     
    
 
return 0;
}