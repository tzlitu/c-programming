#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b)
    {
        if ((a>c)||(a>d))
            printf("Fair");
        else printf("Not");
    }
  else  if(b>a)
    {
        if((b>c)||(b>d))
            printf("Fair");
        else printf("No");
    }
else printf("All player must be distinguist.\nPls enter the correct one.");
    return 0;
}
