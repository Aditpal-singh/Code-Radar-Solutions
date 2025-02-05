#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cost price , selling price;
    scanf("%d %d",&cost price , &selling price);
    if (cost price >selling price)
    {
        printf("Loss")
    }
    else if(cost price <selling price)
    {
        printf("Profit");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}