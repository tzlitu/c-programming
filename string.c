#include<stdio.h>
int main()
{
    char sen[1000],counter=0,i=0;
    fgets(sen,sizeof(sen),stdin);
    printf("%s",sen);
    while(sen[i]!='\0')
    {
        if((sen[i]=='a')||(sen[i]=='e')||(sen[i]=='i')||(sen[i]=='o')||(sen[i]=='u'))
            counter++;
            i++;
            }
            printf("%d",counter);
    return 0;
}
