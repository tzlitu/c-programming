#include<stdio.h>

int is_prime(int p)
{
int i;
if (p==1)return 0;
if (p==2) return 1;
for(i=2;i<=p/2;i++)
{   if(p%i==0)
        return 0;}
        return 1;
}

int main()
{ int a,i;
scanf("%d",&a);
i=is_prime(a);
if(i==1)
    printf("%d is prime\n",a);
else printf(" %d is not prime.",a);



    return 0;
}
