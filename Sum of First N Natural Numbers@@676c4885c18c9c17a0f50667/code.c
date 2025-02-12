#include <stdio.h>


int main() 
{
    int x;
    scanf("%d",&x);

    int a = 0;
    for(int i=1;i<=x;i=i+(i+1))
    {   
        a = a + i;
        printf("%d",a);
    }    
    return 0;
}