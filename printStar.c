#include<stdio.h>
int main()
{
    int i,j,n=7;
    for(i=0;i<=n;i++)
        printf("*");
  for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-2;j++)
            printf("*");
            printf("\n");
    }
    for (i=0;i<=n;i++)
        printf("*");




    return 0;
}
