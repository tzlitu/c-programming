#include<stdio.h>
int main()
{
    char ch='a';
int i;
    char name[200];
    fgets(name,sizeof(name),stdin);

    for(i=0;name[i]!='\0';i++)
    if (name[i]>='a'&& name[i]<='z')
    {
        name[i]-=32;
    }

    puts(name);

    printf("%d",ch);
    return 0;
}
