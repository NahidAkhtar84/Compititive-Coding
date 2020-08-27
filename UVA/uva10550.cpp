#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
int n1,n2,n3,result;
for(;;){
    cin>>a>>b>>c>>d;
    if(a>=0 && a<=39 && b>=0 && b<=39 && c>=0 && c<=39 && d>=0 && d<=39){
      if(a==0 && b==0 && c==0 && d==0){
        break;
      }
      if(b>=a){
        n1=b-a;
      }
      else{
        n1=((40-a)+b);
      }
      if(c>=b){
        n2=c-b;
      }
      else{
        n2=((40-b)+c);
      }
      if(c>=d){
        n3=c-d;
      }
      else{
        n3=((40-d)+c);
      }
      result = 360+360+360+( ((n1*360)/40)+((n2*360)/40)+((n3*360)/40));
      cout<<result<<endl;
    }
}
}
