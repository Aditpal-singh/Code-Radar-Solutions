#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    for(int i=1;i<=x;i++)
    {   
        int a = 65;
        for(int j=1;j<=x+1-i;j++)
        {
            int d = (char)a;
            printf("%c ",d);
            a++;
        }

        printf("\n");
    }
}