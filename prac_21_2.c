#include<stdio.h>
#include<string.h>
void res(int n);

int main()
{

    int n;
    scanf("%d",&n);

    res(n);
    return 0;

}

void res(int n)

{
    int i,j,l,m,k=1,p=1;


        for(i=0; i<n; i++)
        {
//printf("\n");
         //printf("\a");
        for(j=0;j<2*n-k;j++)




       printf(" * ");
        printf("\n");
        k+=2;

     for(m=0;m<p;m++) printf("   ");
     p++;

        }
        return;

}
