#include<stdio.h>

int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
for(int i=1;n>0;i++)
{ sum+=n%10;
    n=n/10;
    }

printf("%lld",sum);
return 0;
}

