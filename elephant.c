#include<stdio.h>
int main()
{
   int n,h,i,a,s=0;
   scanf("%d %d",&n,&h);
   for(i=1;i<=n;i++)
      {scanf("%d",&a);
       s=s+(a/h)+(a%h!=0);
       }
    printf("%d",s);
    return 0;
}
