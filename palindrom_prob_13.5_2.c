#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[]="mam";
    int largest_element=26;
    int freq[27];
    for(i=0; i<27; i++)

        freq[i]=0;
    for(i=0; i<27; i++) freq[str[i]-'a'+1]++;
int odd=0;


        for(i=1; i<27; i++)
        {
            if(freq[i]%2!=0)
        odd++;
          }

    if(odd>1)printf("not");
    else printf("Yes");

    return 0;
}
