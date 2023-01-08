#include<stdio.h>
int main()
{
    int i,n,odd=0,even=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        {
    if(a[i]%2==0)
        even++;
    else odd++;
        }
          if(even==1)
         {for(i=1;i<=n;i++){if(a[i]%2==0)printf("%d",i);}}
    else if (odd==1)
        {for(i=1;i<=n;i++){if(a[i]%2!=0)printf("%d",i);}}
      return 0;
}
