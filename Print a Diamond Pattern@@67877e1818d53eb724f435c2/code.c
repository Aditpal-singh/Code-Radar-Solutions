what is problem in this code #include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x-i;j++)
        printf(" ");

        for(int k=1;k<=i;k++)
        printf("*");

        for(int m=2;m<=i;m++)
        printf("*");

        for(int l=1;l<=x-i;l++)
        printf(" ");}
    for(int i=1;i<=x;i++)
    {
       for(int a=1;a<=i;a++)
        printf(" ");

        for(int s=1;s<=x-i;s++)
        printf("*");

        for(int z=2;z<=x-i;z++)
        printf("*");

        for(int y=1;y<=i;y++)
        printf(" ");

    printf("\n");
    }
}
    