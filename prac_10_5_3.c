#include<stdio.h>

int main()
{
    int i,n,odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
            odd++;
    }
    if(odd%2==0)
        printf("Yes");
    else printf("No");

    return 0;
}
