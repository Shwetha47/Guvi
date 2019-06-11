#include<stdio.h>
int main()
{
long long int n,a[1000],i,j,flag=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{

for(j=i+1;j<n;j++)
{
if(a[i]==a[j]
{
flag=1;
printf("%lld",a[i]);
break;
}
}
if(flag==0)
printf("unique");
}

