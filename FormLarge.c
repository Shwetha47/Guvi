#include<stdio.h>
int main()
{
long long int n,a[1000],i,j,t;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
printf("%lld",a[i]);
}
