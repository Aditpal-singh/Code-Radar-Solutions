#include <stdio.h>
int main() 
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    float a;
    a = (x+y+z)/3;
    printf("%0.2f", a);
    return 0;
}