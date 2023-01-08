#include<stdio.h>
int main()
{
    int n,i,odd=0,even=0;
    printf("How many number you want: ");
    scanf("%d",&n);
   int a[n];
    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

       for(i=0;i<n;i++)
        {
        if (a[i]%2==0)
            even++;
        else odd++;

            }

        printf("Even=%d Odd=%d",even,odd);

        return 0;

}
