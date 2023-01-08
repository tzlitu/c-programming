#include<stdio.h>


int main()
{
    int t,i;
    long long int a,b,c,sum,mis;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%lld %lld %lld %lld",&sum,&a,&b,&c);
    mis=sum-(a+b+c);
    printf("%lld\n",mis);

    }
    return 0;
}


