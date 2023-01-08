#include<stdio.h>
int main()
{
    int n,i,odd,even,a[1000],b[1000];
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

        if(i%2==0)
        printf("%d Even\n",i);
           //scanf("%d",&a[i]);
            //printf("yws %d",a[i]);}

        else printf("%d Odd\n",i);//scanf("%d",&b[i]);

   // for(i=0;i<=n;i++)
   // printf("%d\n %d",a[i],b[i]);
    return 0;

}
