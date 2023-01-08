#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    //find the largest value.
    int max=0,count=0,uni=0,dup=0;
    for(i=0;i<n;i++)
    {if(a[i]>max)
    max=a[i];}
    printf("maximum value=%d\n",max);
    //declare an new array with the max value+1;
    int new_ar[max+1];
    for(i=0;i<max+1;i++)
    new_ar[i]=0;
    for(i=0;i<=n;i++)
        new_ar[a[i]]++;
    for(i=max;i>=1;i--)
    { if (new_ar[i]!=0)
    count++;
        if(count==2)
       printf("2nd largest number %d\n ",i);
    }
  for(i=1;i<=max;i++)
  {if(new_ar[i]==1)
  uni++;
    else if (new_ar[i]>1)
    dup++;
}
printf("unique=%d  duplicate=%d",uni,dup);
    return 0;
}
