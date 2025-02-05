#include <stdio.h>
int main() 
{
    int x,y,z;
    scanf("%d %d %d",&x, &y, &z);

    if(z==+)
    {
        printf("%d+%d=%d",x,y,x+y);
    }
    else if(z==-)
    {
        printf("%d-%d=%d",x,y,x-y);
    }
    else if(z==*)
    {
        printf("%d*%d=%d",x,y,x*y);
    }
    else if(z==/)
    {
        printf("%d/%d=%d",x,y,x/y);
    }
    return 0;
}