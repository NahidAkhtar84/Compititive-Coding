#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int div=0, mib=0;
        div = a/b;
        if(a%b == 0){
            cout<<0<<endl;
        }
        else{
            div=div+1;
            mib = div*b;
            cout<<mib - a<<endl;
        }
    }
}
