#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);

    for(int i=1;i<=10;i=i+1)
    {
        printf("%d*%d=%d",x,i,x*i);
    }
    return 0;
}