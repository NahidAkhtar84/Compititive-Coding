#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n], y[n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        int f=0;
        if(x[0]>=y[0]){
        for(int i=1; i<n; i++){
            if(x[i]< y[i]){
                f=1;
                break;
            }
            if(x[i-1]>x[i] || y[i-1]>y[i]){
                f=1;
                break;
            }
            if((x[i]-x[i-1]) < (y[i] - y[i-1])){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
