#include<stdio.h>
int main()
{
    int a,b,c;
   // printf("enter three numbers?");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the biggest number");
    }
    else if(b>a && b>c)
    {
        printf("b is the largest number");
    }
    else if(c>a && c>b)
    {
        printf("c is the largest number");
    }
    else if(a==b==c)
    {
        printf("all are equal");
    }
}
