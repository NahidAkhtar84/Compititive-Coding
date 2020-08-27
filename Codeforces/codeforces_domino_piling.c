#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    if(m>=1 && m<=16 && n>=1 && n<=16 && n>=m){
        int res;
        res=(m*n)/2;
        printf("%d\n",res);

    }
   return 0;
}
