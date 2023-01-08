#include<stdio.h>
int main()
{
    int i=0, n;
    scanf("%d",&n);


    while(n%2!=0)
    {
        scanf("%d",&n);
        i++;
    }



        if(n%3==0)
            printf("%d",n/3);
        else printf("-1");

    return 0;

}
