#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    int a[]= {5,7,1,3,9,2};
    int s_arr[6];

for(i=0;i<6;i++)printf("%d ",a[i]);
printf("\n");
for(int j=0;j<6;j++)
    {
    int min=a[0];
    int m_index=0;
    for(i=0; i<6; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            m_index=i;
        }

    }
    s_arr[j]=min;
    a[m_index]=999;
for(i=0;i<6;i++)printf("%d ",a[i]);

    printf("\n");}



    for(i=0; i<6; i++)
        printf("%d ",s_arr[i]);


    return 0;
}
