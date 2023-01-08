#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,j;

        scanf("%d",&n);
        if(n%2==0)
        {
            for(i=n/2+1,j=1; j<=n/2; i++,j++)
                printf("%d %d ",i,j);
        }

        else
        {
            for(i=n/2+1,j=n; j>n/2+1; i--,j--)
                printf("%d %d ",i,j);
                printf("1");

        }
        printf(" \n");

    }

    return 0;
}
