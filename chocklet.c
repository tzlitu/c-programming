#include<stdio.h>


int main()
{ int chocklet,pack;
scanf("%d",&chocklet);
pack=chocklet;
while(pack>=4)
{
    chocklet+=pack/4;
    pack=pack/4+pack%4;
}
printf("%d",chocklet);
return 0;
}


