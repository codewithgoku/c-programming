#include<stdio.h>
int main()
{


int marks[5];

      for( int i=0; i<5; i++)
        { 
            printf("Enter is the marks of  student %d:",i+1);
            scanf("%d", &marks[i]);
        }
     for( int i=0; i<5 ;i++)
         {
           printf("The the marks of  student %d is: %d \n",i+1,marks[i]);
   
         }
return 0;
}