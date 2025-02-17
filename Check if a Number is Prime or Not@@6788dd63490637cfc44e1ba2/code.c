#include <stdio.h>


int main() 
{
   int n;
   scanf("%d",&n);
    int x=0;
    for (int i=1;i<=n;i++){
        if(n%i==0)
        {
            x = x + 1;
        }
    }
    if(x==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}