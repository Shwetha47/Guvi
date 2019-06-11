#include<stdio.h>
int main()
{

int i,j,a[100],count[100]={0},n,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
count[i]++;
}
}
}
for(i=0;i<n;i++)
{
flag=0;
if(count[i]>0)
{
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
flag=1;
break;
}
}
if(flag==0)
printf("%d ",a[i]);
}

}




}
