#include<stdio.h>
int main()
{
    int i,n,x,a[4];
 //  for(i=1;i<6;i++){
     //   a[i]=0;
       // printf("%d\n",a[i]);
     //  }
    scanf("%d",&n);
    for(i=1;i<n;i++)
      {
        scanf("%d",&x);
        a[x]=1;
  // printf("%d  ",a[x]);
  }
  for(i=1;i<=5;i++)
    {
      //  printf("%d   %d \n",i,a[i]);

  if(a[i]!=1)printf("Missing %d",i);}




           return 0;
}
