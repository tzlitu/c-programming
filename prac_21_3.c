#include<stdio.h>
//int sum(int x);
int main()
{

    int sum=0, i,x,n;
    scanf("%d",&n);
    int a[n];
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
sum+=a[i]%10+a[i]/1000;
}
printf("%d",sum);

    return 0;

}
/*int sum(int n)
{
    return x;
}*/
