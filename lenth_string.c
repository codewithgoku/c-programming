// length of string
#include<stdio.h>
#include<string.h>
#define max 100
int main(){
    char str[max];
    int len;
    printf("Enter the string:\n");
    gets(str);
    len=strlen(str);
    printf("the length of string is %d",len);
    return 0;
}