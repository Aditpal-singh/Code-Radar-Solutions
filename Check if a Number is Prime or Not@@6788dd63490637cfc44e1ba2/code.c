#include <stdio.h>


int main() 
{
   int n;
   scanf("%d",&n);

   for(int i=2;i<=n-1;i++)
   {
    if(n%i!=0){
        printf("Prime");   
    break;
    }
   }
   else{
    printf("not prime");
   }
    return 0;
}