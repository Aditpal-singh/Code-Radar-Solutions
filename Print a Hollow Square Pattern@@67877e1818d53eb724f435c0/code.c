#include <studio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x)
    {
        for(int j=1;j<=x;j++)
        {
            if (i==1&&i==6 || j==1&&j==6)
            printf("*");
            else 
            printf(" ");
        }
    }
}