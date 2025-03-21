#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);


    int a=x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-1+i;j++)
        {
            printf("%d",a);
            a--;
        }

        printf("\n");
    }
}