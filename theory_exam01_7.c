#include<stdio.h>

int main()
{
int a,b,i,temp;
scanf("%d %d",&a,&b);
if(a>b)
    {temp=a;
    a=b;
    b=temp;}
for(i=a;i>=1;i--)
{
    if((a%i==0)&&(b%i==0))
        printf("GCD= %d",i);
    break;
}

return 0;
}

