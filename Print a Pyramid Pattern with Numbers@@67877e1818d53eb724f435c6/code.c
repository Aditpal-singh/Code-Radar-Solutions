#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        // for(int j=1;j<=x-i;j++)
        // {
        //     printf(" ");
        // }
        for(int k=1;k<=x;k++)
        {
            printf("*");
        }
        // for(int l=2;l<=i;l++)
        // {
        //     printf("*");
        // }

        printf("\n");
    }
}