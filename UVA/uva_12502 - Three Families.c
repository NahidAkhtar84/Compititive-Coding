
#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c,n,e,d;
    scanf("%d",&n);
        while(n--)
        {
           scanf("%d%d%d",&a,&b,&c);
           e=c*(a+(a-b))/(a+b);
           if(e<=0)
           printf("0n");
           else
           printf("%dn",e);
        }
    return 0;
}
