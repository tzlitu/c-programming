#include<stdio.h>
int main()
{
    int i,j,n,a,counter=0,solved=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {counter=0;

for(j=0;j<3;j++)
       {
           scanf("%d",&a);
        counter+=a;
        }

     if (counter>=2)
        solved++;


     }
     printf("%d",solved);
     return 0;
}
