#include<stdio.h>
#include<string.h>
int main()
{
char a[1000];
int i;
scanf("%s",a);
for(i=strlen(a);i>=0;i--)
printf("%c",a[i]);
}
