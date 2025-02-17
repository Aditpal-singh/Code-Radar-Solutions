#include <stdio.h>
int main() 
{   
    char z;
    int x, y;

    scanf("%c", &z);  // Read operator
    scanf("%d %d", &x, &y);  // Read two integers

    if (z == '+') {
        printf("%d + %d = %d", x, y, x + y);
    }
    else if (z == '-') {
        printf("%d - %d = %d", x, y, x - y);
    }
    else if (z == '*') {
        printf("%d * %d = %d", x, y, x * y);
    }
    else if (z == '/') {
        if (y != 0) {
            printf("%d / %d = %d", x, y, x / y);
        } else {
            printf("Error");
        }
    } 
    return 0;
}
