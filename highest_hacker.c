#include<stdio.h>


int main()
{ int n,j,i;
int max=0;
int mark[102];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&mark[i]);}

 for(i=0;i<n;i++)
    { if (max<mark[i])
        max=mark[i];

}
for(i=0;i<n;i++)
    printf("%d ",max-mark[i]);

return 0;
}


