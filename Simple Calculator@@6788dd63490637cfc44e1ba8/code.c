#include <stdio.h>
int main() 
{   
    int x, y,r;
    char z;
    
    scanf("%d %d", &x, &y);
    scanf("%c", &z);  // Read operator
      // Read two integers

    if (z == '+') {
        printf("%d + %d = %d", x, y, x + y);
    }
    else if (z == '-') {
        r = x - y;
        printf("%d",r);
    }
    else if (z == '*') {
        printf("%d * %d = %d", x, y, x * y);
    }
    
    return 0;
}
