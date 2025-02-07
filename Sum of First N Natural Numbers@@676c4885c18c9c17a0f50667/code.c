#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i=i+1)
    {
        printf("%d(%d-1)/2",x,x);
    }    
    return 0;
}