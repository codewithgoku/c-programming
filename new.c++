#include<stdio.h>
#include<conio.h>
int main()
{
  
  int i=8;
  int *j;
  j=&i;
  printf("add i=%u\n",&i);
  printf("add i=%u\n",j);
  printf("add j=%u\n",&j);
  printf("value i=%d\n",i);
  printf("value i=%d\n",*(&i));
  printf("add j=%d\n",*j);
    return 0;
    
}