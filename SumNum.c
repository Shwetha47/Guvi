#include<stdio.h>
int main()
{
long long n,sum=0,i;
scanf("%lld",&n);
for(i=1;i<=n;i++)
sum=sum+i;
printf("%lld",sum);
}
