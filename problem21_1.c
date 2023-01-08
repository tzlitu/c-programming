#include<stdio.h>
#include<string.h>
void res(int n);

int main()
{

int n;
scanf("%d",&n);

res(n);
   return 0;

}

void res(int n)

   {
int i;
   if(n>=0){ for(i=n;i>=-n;i--)
    printf("%d",i);
       return;}

    if(n<0){ for(i=n;i<=-n;i++)

      printf("%d",i);
      return;}
   }
