#include<stdio.h>
int main(){
    int t,n1,n2,n3;
    int i;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1<=20 && n2<=20 && n3<=20){
            printf("Case %d: good\n",i);
        }
        else{
            printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
