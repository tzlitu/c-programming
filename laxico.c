#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],p[1000];

    int i;
    fgets(s,sizeof(s),stdin);
    fgets(p,sizeof(p),stdin);
    int len=strlen(s)-1;

for(i=0;i<len;i++)
   {

   if (s[i]>='A' && s[i]<='Z')

        s[i]+=32;
    if (p[i]>='A' && p[i]<='Z')

        p[i]+=32;}

    int same=1;
    for(i=0; i<len; i++)

    {
        if(s[i]<p[i])
        {
            same=0;
            printf("-1");
            break;
        }
        else if (s[i]>p[i])
        {
            same=0;
            printf("1\n");
            break;
        }
    }



        if (same==1) printf("0");
        return 0;
    }
