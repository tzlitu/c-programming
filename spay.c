#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)

{
    int i,j,n,max=101;
    scanf("%d",&n);

  //// for(j=0;j<n;j++)
  // {
    int input[n+1];
    for(i=1;i<=n;i++)
    scanf("%d",&input[i]);

    int arr[max];
    for(i=0;i<max;i++)
        arr[i]=0;

    for(i=1;i<=n;i++)
        arr[input[i]]+=1;

        int index;
        for(i=1;i<=n;i++)
           {
            if (arr[input[i]]==1)
        index=i;
        break;}
        printf("%d\n",index);
  }
   //}
        return 0;

}

