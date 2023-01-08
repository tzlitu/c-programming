#include<stdio.h>
int main()
{
    int N,x,i;
    int ara[200009];
    scanf("%d",&N);
   for(i=1;i<N;i++)
    {
        scanf("%d",&x);
        ara[x]=1;}

   for(i=1;i<=N;i++)
        if(ara[i]==0)

       printf("%d ",i);

     return 0;

}
