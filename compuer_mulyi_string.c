// comper multistring
#include<stdio.h>
#include<string.h>
#define row 100
#define col 100
int main(){
    char name[row][col],temp[row];
    int i,j,n;
    printf("how many string you enter:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter your string%d:\n",i+1);
        gets(name[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp (name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
   printf(" shroting string is\n");
    for(i=0;i<n;i++){
        printf("\n %s",name[i]);
    }
    return 0;
}
