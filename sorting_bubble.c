#include<stdio.h>
#include<string.h>

int main()
{
int a[]={8,6,4,2,5};
int i;
for(i=0;i<5;i++)
    printf("%d ",a[i]);
    printf("\n");
int temp;
for(int j=0;j<5;j++)
{

for(i=0;i<5;i++)
{
    if(a[i+1]<a[i])
       {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;}
}
for(i=0;i<5;i++)
printf("%d ",a[i]);printf("\n");
}
    return 0;
}
