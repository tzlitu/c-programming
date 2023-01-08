#include<stdio.h>


int main()
{
    char s[100];
    int i;
    fgets(s,sizeof(s),stdin);
   for(i=0;i<strlen(s);i++){ if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
        if(!(s[i]=='a'))
        printf(".%c",s[i]);}
    //puts(s);


    return 0;
}


