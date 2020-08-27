#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;
    int co=0;
    if(x <= n){
    for(int i=1; i<=n;i++)
    {
        if( x%i == 0 && i<=x){
            co++;
        }
    }
      cout<<co<<endl;
    }
    else{
            for(int i=2; i<=n;i++)
    {
        if( x%i == 0 && i<=x){
            co++;
        }
        if(n > x){
            break;
        }
    }
      cout<<co<<endl;
    }
}
