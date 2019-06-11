#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
if(n>=0&&n%2==0)
printf("Even");
else if(n>0&&n%2==1)printf("Odd");
  else printf("Invalid");
}

