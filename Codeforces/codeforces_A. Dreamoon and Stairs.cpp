#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int fdiv, fiv, sdiv;
    if(n < m){
        cout<<"-1"<<endl;
    }
    else{
        fdiv = n/2;
        if(n%2 == 1){
            fiv =fdiv + 1;
        }
        else{
            fiv = fdiv;
        }
        if(fiv%m ==0){
            cout<<fiv<<endl;
        }
        else{
            sdiv = m -(fiv%m);
            if(sdiv > fdiv){
                cout<<"-1"<<endl;
            }
            else{
                cout<<fiv+sdiv<<endl;
            }
        }
    }
}
