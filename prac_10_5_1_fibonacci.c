#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=0; i<n; i++)
        a[i+2]=a[i+1]+a[i];
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
