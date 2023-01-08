#include<stdio.h>
#include<string.h>
int main()
{   int i=0,j=0,len=0;
    char name[100];
    char nic[100];
    fgets(name,sizeof(name),stdin);
    fgets(nic,sizeof(nic),stdin);
    while(name[i]!='\0')
    {
        len++;
        i++;
    }
while(nic[j]!='\0')
{
    name[len-1+j]=nic[j];
    j++;
}
    puts(name);

         return 0;
}
