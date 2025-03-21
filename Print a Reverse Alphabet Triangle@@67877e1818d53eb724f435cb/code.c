#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a = 65;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x+i-1;j++)
        {
            printf("%d",a);
            
        }

        printf("\n");
    }
}