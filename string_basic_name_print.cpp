// print only string 

#include<stdio.h>
#define MAX 20
int main()
{
    char name[MAX];
    printf("enter you name:\n",MAX);
    scanf("%s",name); //no ampersand (&)is used here//
    printf("the enter string is:%s\n",name);
    

return 0;
}