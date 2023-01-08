#include<stdio.h>
int main()
{
    int i,n,m,sum=0,sum1=0,x;
    scanf("%d",&n);
   for(i=1;i<n;i++)
      {
       scanf("%d",&m);
       sum+=m;
        }
    for(i=0;i<=n;i++)
         sum1+=i;
       x=sum1-sum;
       printf("%d",x);
        return 0;

}
