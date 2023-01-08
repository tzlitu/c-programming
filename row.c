#include<stdio.h>
int main()
{
    int i,j,row=4,col=3;
    int a[row][col];
    for(i=0;i<row;i++)

    {
       for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);

    }
    if (row==col)
    {for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
            if(i==j)continue;
        if(a[i][j]!=0)printf("not\m\n");
    }

           // printf("Diagonal");
   // else printf("Not Diagonal");

    /*for(i=0;i<row;i++)
        {
        for(j=0;j<col;j++)
            printf("%d",a[i][j]);
            printf("\n");*/

    }
    return 0;
}
