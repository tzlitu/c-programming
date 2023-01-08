#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int odd=n/2+n%2;
    int even=n/2;
    //printf("%d %d",odd,even);
    if (k<=odd)printf("%d",2*k-1);
    if(k>odd)
    {k-=odd;
            printf("%d",2*k);}


return 0;
}
