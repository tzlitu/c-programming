#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d %d",&m,&n);

    if(m<n)
    {
for(i=m;i<=n;i++){
    printf("%d ",i);
    if(i>=23)
    {n=n-24;
        for(i=0;i<n;i++)
        printf("%d ",i);
    }
    } }
if(m>n){
    for(i=m;i<24;i++)
        printf("%d ",i);
        if(i>23)
        {

        for(i=0;i<=n;i++)
            printf("%d ",i);
            }}
return 0;
}
