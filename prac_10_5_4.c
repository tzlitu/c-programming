#include<stdio.h>

int main()
{
    int i,n,k,small=0;
    scanf("%d",&n);
    int a[n],max=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&k);
    for(i=0;i<n;i++)
    { if(max<a[i])
    max=a[i];}
    int new_arr[max+1];
    for(i=0;i<=max;i++){
    new_arr[i]=0;
     }
    for(i=0;i<=max;i++)
       {
        new_arr[a[i]]++;
        printf("i=%d %d \n",i,new_arr[i]);}
        for(i=1;i<=max;i++)
           {if(new_arr[i]==1)
            small++;
            if(small==k)
               {

                printf("\n%d ",i);
                break;}

            }




    return 0;
}
