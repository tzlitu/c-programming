#include<stdio.h>

int main()
{
    int n,i,com=0;
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            com++;
    }
    if(com!=0)printf("Composite Number");
    else printf("Prime Number");
    return 0;
}

