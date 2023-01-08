#include<stdio.h>


int main()
{ int n,l_d,sum=0;
scanf("%d",&n);
for(int i=1;n>=1;i++)
    {
l_d=n%10;
sum+=l_d;
n=n/10;}
printf("%d",sum);
return 0;
}


