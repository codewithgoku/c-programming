#include<stdio.h>
void blue(){printf("\033[1;34m");}                            //color addtion
void purple(){                                                 //color addtion
 printf("\033[1;35m");
}
void sky(){printf("\033[1;36m");}  
void reset(){
    printf("\033[0m");
}                       //color addtion
int main()
{
long int a[20];
int n,i=0;
blue();
printf("Enter your decimal number:\n");
scanf("%d",&n);
while (n>0)
{
    a[i]=n%2;
    i++;
    n=n/2;
}
purple();
printf("Binary number is:\n");
for(i=i-1;i>=0;i--)
{
    sky();
    printf("%d",a[i]);
}


return 0;
}