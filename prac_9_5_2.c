#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int q,x,y;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&x,&y);
        a[x]=a[x]+y;
    }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
