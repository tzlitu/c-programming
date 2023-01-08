#include<stdio.h>
#include<string.h>

int main()
{
    int i,sum1=0,sum2=0;
    char s[20];
        fgets(s,sizeof(s),stdin);
        printf("%d",strlen(s));
    int a,b;
    scanf("%d %d",&a ,&b);
   int len=strlen(s)-1;
    for(i=0;i<len;i++)
       {
   if( s[i]=='+')
    sum1+=(a+b);
  else if(s[i]=='*')
    sum2+=(a*b);
       }

        printf("%d\n",sum1+sum2);






    return 0;
}
