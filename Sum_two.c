#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int input[n];
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
      int arr[n],min[n];
        for(i=0;i<n;i++)
       {

       if(input[i]>input[i+1])
        min[i]=input[i+1];
       else min[i]=input[i];
        }
       for(i=0;i<n;i++) printf("%d",min[i]);

 /*   int target;
    scanf("%d",&target);
    for(i=0;i<n;i++)
   {
    if(arr[i]+arr[i+1]==target)
       {
        printf("Yes");
        break;}
    else printf("NO");
    }*/
    return 0;
}




