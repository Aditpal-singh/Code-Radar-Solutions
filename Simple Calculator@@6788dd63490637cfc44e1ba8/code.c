#include <stdio.h>
int main() 
{   
    char z;
    int x,y;
    scanf("%d %d %c",&x, &y, &z);

    if(z=="+")
    {
        printf("%d+%d=%c",x,y,x+y);
    }
    else if(z=="-")
    {
        printf("%d-%d=%c",x,y,x-y);
    }
    else if(z=="*")
    {
        printf("%d*%d=%c",x,y,x*y);
    }
    else if(z== "/")
    {
        printf("%d/%d=%c",x,y,x/y);
    }
    return 0;
}