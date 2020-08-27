#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0,res;
    int i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){
        sum=sum+(k*i);
    }
    res=(sum-n);
    if(res<=0){
        cout<<"0"<<endl;
    }
    else{
        cout<<res<<endl;
    }
}
