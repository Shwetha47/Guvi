#include<stdio.h>
int main()
{
long long n,fact=1;
  if(n==0)
    printf("1");
  else{
    
while(n)
{
fact=fact*(n);
n=n-1;
}
printf("%lld",fact);
}
}
