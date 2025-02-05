#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    int x,y;
    scanf("%d",&x, &y);

    if(x^2==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}