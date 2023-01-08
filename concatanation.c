#include<stdio.h>
#include<string.h>

int main()
{
int i=0,len=0;
char s1[50];
char s2[50];
//fgets(s1,sizeof(s1),stdin);
scanf("%s" ,s1);
scanf("%s",s2);
//fgets(s2,sizeof(s2),stdin);

while(s1[i]!='\0')
{
    i++;
    len++;
}
//printf("%d",len);
i=0;
int j=0;
while(s2[j]!=0)
{
    s1[len+j]=s2[j];
    j++;
}
for(i=0;i<50;i++)
    printf("%c",s1[i]);



    return 0;

}


