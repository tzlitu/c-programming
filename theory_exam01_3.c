#include<stdio.h>

int main()
{
    long long int n,count=0;
    scanf("%lld",&n);
for(int i=1;n>0;i++)
{n=n/10;
    count++;}

printf("%lld",count);
return 0;
}

