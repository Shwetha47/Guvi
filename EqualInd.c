#include<stdio.h>
int main()
{
long long int n,a[1000];
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]==i)
printf("%lld",i);
}
}
