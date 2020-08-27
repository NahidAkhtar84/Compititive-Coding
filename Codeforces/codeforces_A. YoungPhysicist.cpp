#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    cin>>n;
    int i,sum1=0,sum2=0,sum3=0;
    for(i=0;i<n;i++){
        cin>>x>>y>>z;
        sum1=sum1+x;
        sum2=sum2+y;
        sum3=sum3+z;
    }

    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
