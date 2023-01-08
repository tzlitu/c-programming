#include<stdio.h>


int main()
{   long long int n;
    long long int sum=0;
    int i,j;
    scanf("%lld",&n);
    for(i=0;i<n-1;i++)
    {
        for(j=2;j<=n-i;j++)
            sum++;
    }

printf("%lld ",sum);
    return 0;
}


