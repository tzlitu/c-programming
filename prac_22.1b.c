#include<stdio.h>
#include<string.h>
int bin(char ch[]);
int main()
{
    int i=0,count=0,ans;
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    ans=bin(ch);
if(ans==1)printf("Yes");
else printf("No");
    return 0;

}
int bin(char ch[])
{
    int i=0,count=0;
    while(ch[i]>0)
    {
        if((ch[i]=='1')|| (ch[i]=='0'))printf("");
        else  count++;
        i++;
    }
    if(count>1)return 0;
    else return 1;
}




