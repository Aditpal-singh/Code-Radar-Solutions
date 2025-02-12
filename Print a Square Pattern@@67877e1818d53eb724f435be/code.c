#include <stdio.h>
int main()
{
    int length;
    scanf("%d",&length);

    for(int i=1;i<=length;i=i+1)
    {   
        printf("\n");
        for(int j=1;j<=length;j=j+1)
        {
            printf("*");
        }

    }
}