#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    
    int a=65;
    char ch = (char)a;
    for(int i=1;i<=x;i++)
    {
        
        for(int k=1;k<=i;k++)
        printf("%c",ch);
        a++;
        printf("\n");
       
    }
}