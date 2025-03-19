#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
   
    for(int i=1;i<=x;i++)
    {
        int a=1;
        for(int j=1;j<=x-i;j++)
        printf(" ");

        for(int k=1;k<=i;k++)
        printf("%d",a);
        a++;
    }
}