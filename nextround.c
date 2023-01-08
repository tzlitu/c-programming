#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=1;i<=n;i++)
          scanf("%d",&a[i]);
    int ans=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]>0)
            ans++;
    }
       printf("%d",ans);
        return 0;

}
