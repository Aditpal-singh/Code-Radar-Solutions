#include <stdio.h>

int main() 
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        for(int j=x;j<=1;j--){
            printf("* ");

        }
        printf("\n");
    }   
    
    return 0;
}