#include<stdio.h>
int main()
{
long long int a[1000],n,i,k,sum=0;
scanf("%lld %lld",&n,&k);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<k;i++)
sum=sum+a[i];
printf("%lld",sum);
}
