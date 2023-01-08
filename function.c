#include<stdio.h>
int result(int x, int y)
{
  return x+y;
}
int sub(int x, int y)
{
    return x-y;
}

int odd(int x)
{
   if(x%2!=0)
    return 1;

}
int main()
{
    int a,b,x,y,o;
    scanf("%d %d",&x,&y);

    a=result(x,y);
    b=sub(x,y);
    o=odd(x);
    if(o==1)
            printf("Odd\n");
    else printf("even\n");

    printf("%d \n%d",a ,b);

    return 0;
}
