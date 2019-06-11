#include<stdio.h>
int main()
{
long long int n,count=0;
scanf("%lld",&n);
while(n)
{
n=n/10;
count++;
}
printf("%lld",count);
}
