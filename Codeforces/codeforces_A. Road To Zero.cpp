#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x, y, a;
        double b;
        long long sum=0;
        cin>>x>>y>>a>>b;
        if(a< (b/2)){
            sum = a*(x+y);
        }
        else{
            if(x<y){
                sum = x*b + (y-x)*a;
            }
            else if(y<x){
                sum = y*b + (x-y)*a;
            }
            else{
                sum = x*b;
            }
        }
        cout<<sum<<endl;
    }
}
