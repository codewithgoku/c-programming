#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX 1000
void upper(char string[]);
int main()
{
    char str_1[MAX],str_2[MAX];
    int i,j,k,flag,len_1,len_2,count=0;
    printf("\n enter your pragarph:\n");
    gets(str_1);
    fflush(stdin);
    printf("enter your line which you want to find:\n");
    gets(str_2);
    upper(str_1);
    upper(str_2);
    len_1=strlen(str_1); 
    len_2=strlen(str_2);
    for(i=0;i<(len_1-len_2+1);i++)
    {
        if(str_1[i]==str_2[0])
        {
            flag=1;
            for(j=0,k=i;str_2[j]!='\0';j++,k++)
            {
                if(str_1[k]!=str_2[j])
                {
                    flag=0;
                    break;
                }
            
            }
            if(flag==1)
            {
                if((i==0||str_1[i-1]==' ')&&(str_1[k]==' '||str_1[k]=='\0'))
                count++;
            
            }
        }
    }
    printf("\n total number of lines'%s'in the pragarph:%d",str_2,count);
return 0;
}
void upper(char string[])
{
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i]>=97&&string[i]<=122)
        string[i]=string[i]-32;
    }
}