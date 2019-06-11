#include<stdio.h>
int main()
{
int n,m,a[100],b[100],i,j,k,flag;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<m;i++)
{flag=1;
for(j=0;j<n;j++)
{
if(a[j]==b[i])
{
flag=0;
break;
}
}
if(flag==1)
break;
}
if(flag==0)
printf("YES");
else printf("NO");
}

