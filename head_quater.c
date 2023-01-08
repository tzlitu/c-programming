#include<stdio.h>

int main()
{
    int n,k,i,j,sum=0;

    scanf("%d %d",&n,&k);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=k;j++){
        sum+=100*i+j;
       }
   }
    printf("%d  ",sum);




    return 0;
}
