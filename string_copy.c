// string copy 
#include<stdio.h>
#include<string.h>
#define max 100
int main(){
    char str1[max],str2[max],temp[max];
    printf("enter the first string:\n");
    gets(str1);
    printf("enter the second string:\n");
    gets(str2);
    printf("your string is %s\t%s",str1,str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("\nyour string is %s\t%s",str1,str2);
    return 0;
}