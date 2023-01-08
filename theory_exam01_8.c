#include<stdio.h>

int main()
{
int a,b,i,temp;
scanf("%d %d",&a,&b);
if(a>b)
    {temp=a;
    a=b;
    b=temp;}

for(i=b;i<=a*b;i++)
{
    if((i%a==0)&&(i%b==0))

        printf("LCD= %d",i);
    else printf("LCD=%d",a*b);
    break;
}

return 0;
}

