#include<stdio.h>
int main()
{
long long int n,a[1000],flag=0,i;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]==i)
{
  flag=1;
printf("%lld",i);
}
}
  if(flag==0)
    printf("-1");
}
