#include<iostream>
using namespace std;
int main(){
int n,p,q,m=0;
cin>>n;
if(n>=1 && n<=100){
    for(int j=0; j<n;j++){
        cin>>p>>q;
        if(0<=p && 100>=p && 0<=q && 100>=q){
        p=p+2;
        if(q>=p){
          m=m+1;
        }
    }
    }
    cout<<m<<endl;
}
return 0;
}
