#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {if(max<a[i])
        max=a[i];}
    int arr[max+1];
    for(i=0;i<=max;i++)
        arr[i]=0;
    for(i=0;i<n;i++)
        arr[a[i]]++;
    for(i=0;i<=max;i++)
    {
    if(arr[i]!=0)
    printf("%d ",i);}
    return 0;
}
