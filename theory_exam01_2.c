#include<stdio.h>

int main()
{
    int x,n=4,large=-100000,small=100000;
   for(int i=1;i<=n;i++)
     {scanf("%d",&x);
    if(large<x) large=x;

   if(small>x) small=x;}

printf("largest=%d\nsmallest=%d", large, small);
return 0;
}

