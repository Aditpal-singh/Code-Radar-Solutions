#include <stdio.h>


int main() 
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i=i+(i+1))
    {
        printf("%d",i);
    }    
    return 0;
}