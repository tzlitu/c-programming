#include<stdio.h>
int main()
{ int i,n;
scanf("%d",&n);
int input[n];
for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
        }



int largestElement=input[0];
   for(i=0;i<n;i++)
       {
        if (input[i]>largestElement)
        {
            largestElement=input[i];
        }
        }


  int arr[largestElement+1];
  for(i=0;i<=largestElement;i++)
  {
      arr[i]=0;
  }
    for(i=0;i<n;i++)
    {
        arr[input[i]]+=1;
    }
    int cnt=0;
    for(i=largestElement;i>=1;i--)
    {
        if (arr[i]==1)
           {

            cnt++;
           }
        if(cnt==3)
        {
            printf("3rd largest is %d",i);
            break;
        }
    }

    return 0;



}

