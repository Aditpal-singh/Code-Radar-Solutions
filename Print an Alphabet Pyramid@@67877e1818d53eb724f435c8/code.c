#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    int a=65;
    for(int i=1;i<=x;i++)
    {   
        char ch = (char)a;

        for(int k=1;k<=i;k++)
        
        printf("%c ",ch);
        a=a+1;
        printf("\n");
       
    }
}