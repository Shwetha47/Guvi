#include<stdio.h>
int main()
{
long long int y;
scanf("%lld",&y);
if(y%400==0) printf("yes");
else if(y%100!=0&&y%4==0)
printf("yes");
else printf("no");
}


