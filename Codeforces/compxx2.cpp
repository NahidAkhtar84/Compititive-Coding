#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    if(t<15 && t>0){
            for(i=1;i<=t;i++){
        cin>>a>>b;
        if(a<1000000001 && b<1000000001){
            if(a<b){
                cout<<"<"<<endl;
            }
            if(a>b){
                cout<<">"<<endl;
            }
            if(a==b){
                cout<<"="<<endl;
            }
        }
    }
    }
    return 0;
}
