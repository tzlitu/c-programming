//#include<bits/stdc++.h>
//using namespace std;
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    scanf("%s",s);
    printf("%s",s);
int len,i;
len=strlen(s);
printf("\n%d\n",len);
for(i=0;i<len;i++)
    s[i]=(s[i]-'a')+1;
   // for(i=1;i<27;i++)
      //  printf("%d",s[i]);
    printf("\n");
int arr[27];
for(i=0;i<27;i++)
arr[i]=0;

for(i=1;i<27;i++)
    arr[s[i]]++;
    for(i=1;i<27;i++)
printf("index=%d-----%d\n ",i,arr[i]);
return 0;
}
