#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        printf(" ");

        for(int k=1;k<=i;k++)
        printf("*");

        for(int m=2;m<=i;m++)
        printf("*");

        for(int l=1;l<=x-i;l++)
        printf(" ");

    printf("\n");
    }
}