#include<stdio.h>
void ans(int x);
int main()
{

    int n;
    scanf("%d",&n);
   ans(n);
 //  printf("%d",result);
    return 0;

}
void ans (int x)
{int i;
    for(i=1;i<=x;i++)
        if(x%i==0)printf("%d ",i);
}



