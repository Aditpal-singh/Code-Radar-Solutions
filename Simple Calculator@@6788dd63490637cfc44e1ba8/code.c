#include <stdio.h>
int main() 
{   
    
    int x,y;
    char z;
    scanf("%d %d",&x, &y);
    
    scanf("%c",&z);

    if(z=='+')
    {
        printf("%d+%d=%d",x,y,x+y);
    }
    else if(z=='-')
    {
        printf("%d-%d=%d",x,y,x-y);
    }
    else if(z=='*')
    {
        printf("%d*%d=%d",x,y,x*y);
    }
    else if(z== '/')
    {
        printf("%d/%d=%d",x,y,x/y);
    }
    return 0;
}