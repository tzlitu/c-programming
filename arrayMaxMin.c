#include<stdio.h>
int main()
{ int i,max=0,min=20000,n;
printf("number:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

   for(i=0;i<n;i++)
    printf("%d\n",arr[i]);

    for(i=n-1;i>=0;i--)
        printf("%d\t",arr[i]);

   for(i=0;i<n;i++)
        if (max<arr[i])
        max=arr[i];

   for(i=0;i<n;i++)
      if (min>arr[i])
        min=arr[i];


  printf("\n%d Max & %d Min",max,min);



    return 0;



}

