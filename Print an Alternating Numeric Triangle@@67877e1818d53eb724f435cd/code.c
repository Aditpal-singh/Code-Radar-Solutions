#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int a=1;
    for(int i=1;i<=x;i++)
    {
        if(i%2==0) 
            a=0;
        else a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a); 
            if(a==1) 
               a=0;
            else a=1;

                       
            
        }
        printf("\n");
    }
}