#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter desire number:");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)



        scanf("%d",&a[i]);
     for(i=n;i>=1;i--)

        printf("%d\t",a[i]);
        return 0;

}
