#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int n;
    cin>>n;
    if(n == 1){
        cout<<-1<<endl;
    }
    else{
        cout<<2;
        for(int i=0; i<n-1; i++){
            cout<<3;
        }
        cout<<endl;
    }
    }

}
