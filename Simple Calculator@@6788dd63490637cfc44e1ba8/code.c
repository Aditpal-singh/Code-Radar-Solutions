#include <stdio.h>
int main() 
{   
    
    int x,y;
    scanf("%d %d",&x, &y);
    char z;
    scanf("%c"&z);
    if(z=="+")
    {
        printf("%d+%d=%d",x,y,x+y);
    }
    else if(z=="-")
    {
        printf("%d-%d=%d",x,y,x-y);
    }
    else if(z=="*")
    {
        printf("%d*%d=%d",x,y,x*y);
    }
    else if(z== "/")
    {
        printf("%d/%d=%d",x,y,x/y);
    }
    return 0;
}