//  string print using string function gets and puts function

#include<stdio.h>
#include<string.h>
#define MAX 20
int main()
{

    char name[MAX];
    printf("the your name :\n");
    gets(name);
    puts("the enter string is:");
    puts(name);
    
   
return 0;
}