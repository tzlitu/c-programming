#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
printf("%d",n);
while(n!=1)
{
if(n%2==0)n=n/2;
else n--;
printf(",");
printf("%d",n);
}
return 0;
}

