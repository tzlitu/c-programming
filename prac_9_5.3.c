#include<stdio.h>


int main()
{ int n,i,yes=0;
scanf("%d",&n);

 int a[n];
for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);}

  for(i=0;i<n;i++)  {if(a[i]==a[i+1])
        yes++;}
        printf("%d\n",yes);
   if(yes==4) printf(" Yes");
   else printf("NO");
return 0;
}


