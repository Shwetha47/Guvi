#include<stdio.h>
int main()
{
long long n,fact=1;
while(n)
{
fact=fact*(n);
n=n-1;
}
printf("%lld",fact);
}
