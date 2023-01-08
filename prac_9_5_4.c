#include<stdio.h>

int main()
{
    int i,j,n,ans=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {printf("%d-",a[i]);
        for(j=0;j<n;j++)
           {

           if(a[i]!=a[j])
              printf("%d ",a[j]);}
        printf("\n");
    }

    return 0;
}
