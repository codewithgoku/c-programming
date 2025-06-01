#include<stdio.h>
int main()
{
    int phy;
    printf("enter your physices number:\t");
    scanf("%d",&phy);
    switch (phy/10)
    {
    case 5:
        case 4:
        printf("your grade is'A'");
        break;
    case 3:
        printf("your grade is'B'");
        break;
        case 2:
        printf("your grade is'c'");
        break;
    default:
    printf("you are fail in EXAM");
        break;
    }
}