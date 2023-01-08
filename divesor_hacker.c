#include<stdio.h>


int main()
{
    int i,k,n;
    int x[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&x[i]);
      scanf("%d",&k);
   for(i=k+1;i<=n;i++)
    printf("%d ",x[i]);
  for(i=1;i<=k;i++)
   printf("%d ",x[i]);
    return 0;
}


