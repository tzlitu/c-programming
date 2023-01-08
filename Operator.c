#include<stdio.h>
int main()
{
    long long int i,n;
    scanf("%lld",&n);
    printf("%lld ",n);
    for (i=0;n!=1;i++)
    {if (n%2==0)
        n=n/2;
    else
        n=3*n+1;

    printf("%lld ",n);}
    return 0;
}
