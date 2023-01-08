#include<stdio.h>
#include<string.h>
int main()
{ int i,m;
scanf("%d",&m);
//for (i=0;i<m;i++)
    string a[m];
for(i=0;i<m;i++)
    fgets(a[i],sizeof(a[i]),stdin);

for(i=0;i<m;i++)
    printf("%s",a[i]);



    return 0;
}
