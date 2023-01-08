#include<stdio.h>
int main()
{
    int N,x;
    int ara[10000];
    int i;
    scanf("%d",&N);

   for(i=1;i<N;i++)
    {
        scanf("%d",&x);
        ara[x]=1;}


   for(i=1;i<=N;i++)
   // printf("Testing %d\n",i);
       if(ara[i]==0)

       printf("Missing number is:%d ",i);


    //ara[i]=0;

        return 0;

}
