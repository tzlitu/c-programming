#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,count=0;
    char ch[100];
    fgets(ch,sizeof(ch),stdin);

    while(ch[i]>0)
    {
        if((ch[i]=='1')|| (ch[i]=='0'))printf("");
            else  count++;
        i++;
    }
    if(count>1)printf("No");
    else printf("Yes");

    return 0;

}
/*void ans (int x)
{int i;
    for(i=1;i<=x;i++)
        if(x%i==0)printf("%d ",i);
}
*/


