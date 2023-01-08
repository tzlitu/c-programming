#include<stdio.h>

int main()
{
    long long int n,t,odd,even,ans;
    scanf("%lld %lld",&n,&t);
    odd=n/2+(n%2!=0);
    even=n/2;
    if(odd>=t)
        ans=2*t-1;
    else ans=2*(t-odd);
    printf("%lld",ans);

    return 0;
}
