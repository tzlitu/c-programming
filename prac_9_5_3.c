#include<stdio.h>

int main()
{
    int i,n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            ans++;
            break;
    }
    if(ans)printf("No");
    else printf("Yes");

    return 0;
}
