#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char str[]="bbbbaccddd";
    int n=strlen(str);
    int largestelement=26;
//int largestelement+1;
    int freq[largestelement+1];
    for(i=0; i<largestelement; i++)
        freq[i]=0;

    for(i=0; i<n; i++)
    {
        freq[(str[i]-'a'+1)]++;

    }
    for(i=1; i<26; i++)
        printf("%d ",freq[i]);


int nxt=0;
while(nxt!=4)
    {
    int max=-1,index=1;
char ch;
for(int i=0;i<26;i++)
   {
   if(freq[i]>max)
   {
    max=freq[i];
    ch=i+96;
    index=i;}

   }

printf("\nnext freatest value=%d",max);
printf("\tcharacter=%c\n",ch);
freq[index]=0;
nxt++;}

    return 0;

}


