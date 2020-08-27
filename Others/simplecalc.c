#include<stdio.h>
int main(){
int num1,num2;
int act;

while(scanf("%d %d", &num1,&num2)){
scanf("%d",&act);
int sum,sub,mult,div,mod;
sum=num1+num2;
sub=num1-num2;
mult=num1*num2;
div=num1/num2;
mod=num1%num2;
if(act==1){
    printf("Sum: %d\n",sum);
}
else if(act==2){
    printf("Sub: %d\n",sub);
}
else if(act==3){
    printf("Multiplication: %d\n",mult);
}
else if(act==4){
    printf("Division: %d\n",div);
}
else if(act==5){
    printf("Mod: %d\n",mod);
}
else{
    printf("Give a valid Action key with in 1 to 5 to calculate \n");
}

}
return 0;
}
