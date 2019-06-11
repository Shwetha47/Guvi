#include<stdio.h>
int main()
{

long long int a[1000],n,i,j;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{
if((i%2==0&&a[i]%2==1)||(i%2==1&&a[i]%2==0))
printf("%lld ",a[i]);
}
}
