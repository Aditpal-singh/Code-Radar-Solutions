#include <stdio.h>
int main() 
{
    float x,y,z;
    scanf("%f %f %f", &x, &y, &z);
    float a;
    a = (x+y+z)/3;
    printf("Average: %0.2f", a);
    return 0;
}