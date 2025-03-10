#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        int a=0;
        for(int j=1;j<=x+1-i;j++)
        {
           printf("%d ",a=a+1);
        }
        printf("\n");
    }
}