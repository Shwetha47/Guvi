#include<stdio.h>
#include<string.h>
int main()
{
char a[1000],r[1000];
int i,j=0;
scanf("%s",a);
for(i=strlen(a)-1;i>=0;i--)
{
r[j]=a[i];
  j++;
}
  printf("%s",r);
}
