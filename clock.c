#include<stdio.h>

int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    if(start>=end)
        end+=12;
    for(int i=start;i<=end;i++)
    {
        if(i==12){
            printf("12 ");
            continue;
        }
printf("%d ",i%12);

    }
    return 0;
}
