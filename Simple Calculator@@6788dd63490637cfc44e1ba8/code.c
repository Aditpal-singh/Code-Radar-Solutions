#include <stdio.h>
int main() 
{   
    char z;
    int x,y;

    scanf("%c",&z);
    scanf("%d %d",&x, &y);
    

    if(z =='+')
    {
        result = x + y;
        printf("%d+%d=%d",result);
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