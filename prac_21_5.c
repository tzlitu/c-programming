#include<stdio.h>
void even(int x);
int main()
{

    int ans,x,n,i;
    scanf("%d",&n);
    even(n);
   // for(i=1;i<=n;i++)
       // if(i%2==0)printf("%d",i);
    return 0;

}
void even(int x)
{
int i;
   for(i=1;i<=x;i++){if(i%2==0)printf("%d",i);}
    return ;

}
