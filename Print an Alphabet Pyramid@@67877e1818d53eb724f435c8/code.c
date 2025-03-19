#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    int a=65;
    char ch = (char)a;
    for(int i=1;i<=x;i++)
    {   
        int a=65;
        char ch = (char)a;

        for(int k=1;k<=i;k++)
        
        printf("%c ",ch);
        a=a+1;
        printf("\n");
       
    }
}