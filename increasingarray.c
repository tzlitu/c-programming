#include<stdio.h>
int main()
{
    int i,n,move=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

   for(i=1;i<n;i++)

  {
    if (a[i]<a[i-1])
       {
        move+=(a[i-1]-a[i]);
        a[i]=a[i-1];
        }
    }
        printf("%d",move);

    return 0;
}
