#include<stdio.h>
int main()
{
int a[100],i,n,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==0||a[i]+a[j]==-1||a[i]+a[j]==1)
printf("%d",a[i]+a[j]);
}
}
}
