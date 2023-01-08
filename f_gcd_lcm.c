#include<stdio.h>
int my_gcd(int x,int y)
{
    int i;
    for(int i=x; i>=1; i--)

        if(x%i==0 && y%i==0)
            return i;
}

int my_lcm(int x,int y)
{

     for(int i=x; i>=1; i--)

       if(x%i==0 && y%i==0)

            return x*y/i;

}



int main()
{
     int a,b,temp;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }


    int lcm,gcd;
    gcd=my_gcd(a,b);
    lcm=my_lcm(a,b);

    printf("GCD=%d & LCM=%d ",gcd,lcm);
    return 0;
}
