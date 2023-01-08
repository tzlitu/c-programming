#include<stdio.h>
int ans(char op, int x,int y);
int main()
{
char op;
    int x,y,i,result;
    scanf("%c %d %d", &op ,&x,&y);
   result= ans(op,x,y);
   printf("%d",result);
    return 0;

}
int ans (char op,int x,int y)
{
if (op=='*') return x*y;
  else if (op=='+') return x+y;
  else if (op=='-') return x-y;
  else if (op=='/') return x/y;


}
