#include<stdio.h>
int main()
{
    int i;
    char str[]="bbbbaccdddz";
    int strlen(str);
    int largest_element=26;
    int freq[27];
    for(i=0; i<27; i++)

        freq[i]=0;
    for(i=0; i<27; i++) freq[str[i]-'a'+1]++;

    int total=0;
    for(i=0; i<27; i++)
    {
        if(freq[i]>=1)
            total++;
    }
      printf("%d\n",total);

   //   for(i=0;i<27;i++)  printf(" %d %d\n",i, freq[i]);
      printf("\n");

   for(int j=0; j<=total; j++)

    {printf("\n");
        int max=0;
        int index=0;
        char ch;
        for(i=1; i<27; i++)
        {
            if(max<freq[i])
            {
                max=freq[i];
                ch=i+96;
                index=i;
            }
           //printf("%d %d %c\n",i,max, ch);
        }
        for(int i=1; i<=max; i++)
            printf(" %c ",ch);
        freq[index]=0;
    }

    return 0;
}
