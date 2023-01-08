#include<stdio.h>
int main()
{
   long long int d;
   int s;
   scanf("%lld",&d);
   if (d%5==0)
    s=d/5;
    else s=d/5+1;
    printf("%d",s);
    return 0;
}
