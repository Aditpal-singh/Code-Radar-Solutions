#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(int a=1;a<=i;a++){
        printf("*");
        }
        printf("\n");
    }
}