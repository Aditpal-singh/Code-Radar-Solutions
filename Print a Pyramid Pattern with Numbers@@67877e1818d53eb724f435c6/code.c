#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int a=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        printf(" ");

        for(int k=1;k<=2*i-1;k++)
        printf("%d ",a);
        a++;
        for(int a=1;a<=x-i;a++)
        printf(" ");

        printf("\n");
    }
}