#include <stdio.h>
void isprime(int num)
{
    int x;
    scanf("%d",&x);
    int isprime = 1;
    
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        isprime = 0;
    }
    if(isprime)
    printf("1");
    else
    printf("0");
    return;
}
int main()
{
    int t;
    scanf("%d",&num);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));

    }
}
return 0;
}