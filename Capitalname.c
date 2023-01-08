#include<stdio.h>
#include<string.h>

main()
{
   char name[100];
   int i,count=0;
   fgets(name,sizeof(name),stdin);
   puts(name);
    for(i=0;name[i]!='\0';i++)

       if(name[i]>='a'&& name[i]<='z')
    name[i]-=32;

   puts(name);

  for(i=0;i<100;i++)
    {
   if (name[i]=='a')
   count++;
    else if(name[i]=='e')
   count++;
    else if(name[i]=='i')
   count++;
    else if(name[i]=='O')
   count++;
    else if(name[i]=='U')
   count++;

  else if (name[i]=='A')
   count++;
    else if(name[i]=='E')
   count++;
    else if(name[i]=='I')
   count++;
    else if(name[i]=='O')
   count++;
    else if(name[i]=='U')
   count++;

   }
   printf("%d",count);

   return 0;

}
