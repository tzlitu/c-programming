#include<stdio.h>
int main()
{

    int n;

    printf("Enter even number");

   scanf("%d",&n);

 while(n%2==0)  { if(n%3==0)printf("%d",n/3);
    else printf("-1");break;}

    return 0;
}
