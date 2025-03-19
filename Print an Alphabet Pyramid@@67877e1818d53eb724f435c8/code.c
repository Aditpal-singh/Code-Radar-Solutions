#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    int a=1;
    char ch = (char)a;
    for(int i=1;i<=x;i++)
    {
        
        for(int k=1;k<=i;k++)
        printf("%d ",k);
        printf("\n");
       
    }
}