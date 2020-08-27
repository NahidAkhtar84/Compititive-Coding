#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res;
    if(n%2 == 0)
    {
        res = n/2;
        cout<<res<<endl;
        for(int i=0; i<res; i++){
            cout<<"2"<<" ";
        }
        cout<<endl;
    }
    else{
        res = n/2;
        cout<<res<<endl;
        for(int i=0; i< res-1; i++){
            cout<<"2"<<" ";
        }
        cout<<"3"<<endl;
    }

}
