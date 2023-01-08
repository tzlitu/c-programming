#include<stdio.h>

int main()
{
int a,b;
scanf("%d %d",&a,&b);
if(a%b==0)printf(" 1st one is divisible by 2nd one");
else if(b%a==0)printf("2nd one is divisible by 1st one");
else printf("No one is divisible by each other");

return 0;
}

