#include<stdio.h>

int main()
{
    int i,j,n,t,yes=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        scanf("%d",&t);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==t)
                yes++;

        }
    }

              if(yes)
                printf("Yes");
            else printf("No");
    return 0;
}
