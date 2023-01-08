#include<stdio.h>
#include<string.h>

int main()
{
char s1[100],s2[100];
scanf("%s %s",s1,s2);
int len=0,i;
for(i=0;s1[i]!='\0';i++)
    len++;
   // printf("%d",len);

   for(int j=0;s2[j]!='\0';j++)
   s1[len+j]=s2[j];
   printf("%s",s1);

   return 0;

}
