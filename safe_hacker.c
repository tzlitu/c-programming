#include<stdio.h>


int main()
{
    int t,i=0,j,no=0;
    int n[100];
    scanf("%d",&t);
    for(i=0; i<t; i++)
        scanf("%d",&n[i]);

for(i=0;i<t;i++)
    {no=0;
        for(j=2; j<n[i]; j++)
        {
            if(n[i]%j==0)
                no++;}


            if(no)printf("No\n");
            else if(n[i]==1)printf("No\n");
            else printf("Yes\n");

        }



    return 0;
}


