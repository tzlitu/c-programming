#include<stdio.h>
int main()
{
    int x,i,n,h,width=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<=h)width++;
        else width+=2;
    }
    printf("%d",width);

return 0;
}
