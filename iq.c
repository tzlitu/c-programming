#include<stdio.h>
int main()
{
    int i,n,odd=0,even=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        {
    if(a[i]%2==0)
        even++;
    else odd++;
        }
    printf("even %d\t  odd= %d\n",even,odd);

  //for(i=1;i<=n;i++)

         if(even==1)
         {for(i=1;i<=n;i++){if(a[i]%2==0)printf("even %d",i);}}




    else if (odd==1)
        {for(i=1;i<=n;i++){if(a[i]%2!=0)printf("odd=%d",i);}}
    //continue;


   return 0;
}
