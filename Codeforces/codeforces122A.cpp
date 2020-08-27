#include<iostream>
using namespace std;
int main(){
int n,m;
int n1,n2;
cin>>n;

n1=n/4;
n2=n/7;
if((n%4==0 && (n1%2==0|| n2%2==0))|| (n%7==0&&(n1%2==0|| n2%2==0))){
    cout<<"YES1"<<endl;

}
else {
for(;;){
   m=n%10;
   if(m!=4 || m!=7){
       cout<<"NO"<<endl;
       break;
   }
   n=n/10;
   if(n==0){
    cout<<"YES2"<<endl;
    break;
   }
}
}
return 0;
}
