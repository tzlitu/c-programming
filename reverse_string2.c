#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
   int len=strlen(name);
   // printf("%d",len);
for(int i=len-1;i>=0;i--)

printf("%c",name[i]);

         return 0;
}
