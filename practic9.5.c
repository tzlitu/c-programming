#include<stdio.h>
#include<string.h>

int main()
{

int n,i,j;
scanf("%d",&n);
int a[n],ans=0,flag=0;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     int tar;
    scanf("%d",&tar);

  for(i=0;i<n;i++)
       {ans=a[i];
       for(j=1;j<n-1;j++)
        {ans+=a[j];
       if(ans==tar)
       {

       flag++;break;}
       ans-=a[j];}
       }

  /* for(i=0;i<n-1;i++)
        {ans=a[i]+a[i+1];
          if(tar==ans)
        flag++;
       }*/
        if (flag!=0)
            printf("Yes");
        else printf("No");

   return 0;

}
