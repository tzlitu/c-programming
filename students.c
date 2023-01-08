#include<stdio.h>
int main()

{
    int i,j,mark,sum=0,roll;
    float avr;
    for(i=1;i<=4;i++)
        {
        printf("Students roll:");
    scanf("%d",&roll);
    for(j=1;j<=3;j++)
        {
            printf("Marks : ");
    scanf("%d",&mark);

    sum+=mark;}
    avr=(sum/3);
    printf("Roll: %d",roll);
    printf("Average=%f\n",avr);
    avr=0.0;
    sum=0;}

    return 0;
}
