#include <stdio.h>
void primenumberchecker()
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
    printf("prime number ");
    else
    printf("not prime ");
    
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