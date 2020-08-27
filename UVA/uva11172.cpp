#include<iostream>
using namespace std;
int main()
{
  int t,i;
  cin>>t;
  long int a,b;
  if(t<15 && t>=1){
    for(i=t;i>0;i--){
        cin>>a>>b;
        if(a>b){
            cout<<">"<<endl;
        }
         if(a<b){
            cout<<"<"<<endl;
        }
         if(a==b){
            cout<<"="<<endl;
        }
    }
  }
  return 0;
}
