#include<stdio.h>
int main()
{
long long n,i,a[1000],flag,j;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);

for(i=0;i<n;i++)
{
  flag=0;
for(j=0;j<n;j++)
{
if(i!=j&&a[i]==a[j])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%lld",a[i]);
break;
}
}
}
