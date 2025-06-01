#include<stdio.h>
#include<math.h>
int covert(long long);
int main()
{
long long a,b;
printf("Enter your binary number:\n");
scanf("%lld",&a);
b=covert(a);
printf("%lld",b);

return 0;
}
int covert(long long)
{
     int dec = 0,n,i = 0, rem;

  while (n!=0)
   {
    rem = n % 10;
    dec = rem * pow(2, i);
    rem=n/10;
    ++i;
   }
   return dec;
}