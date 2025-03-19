#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    
    for(int i=1;i<=x;i++)
    {   
        int a=65;

        for(int k=1;k<=i;k++)
        char ch = (char)a;
        printf("%c ", ch);
        a=a+1;
        printf("\n");
       
    }
}