#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0,max=0,min=1000;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
        {if(arr[i]%2==0)
        even++;
    else odd++;}
    printf("%d even, %d odd\n",even,odd);

   for(i=0;i<n;i++)
    {if (arr[i]>arr[i+1])
        max=arr[i];
    else
      max=arr[i+1];
    }
    printf("%d Max ",max);



    return 0;



}

