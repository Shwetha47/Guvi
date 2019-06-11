#include<stdio.h>
int main()
{

long int a[1000],n,i;
scanf("%ld",&n);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=0;i<n;i++)
{
if((i%2==0&&a[i]%2==1)||(i%2==1&&a[i]%2==0))
printf("%ld ",a[i]);
}
}
