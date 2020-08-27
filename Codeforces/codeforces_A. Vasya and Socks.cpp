#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int x,y;
    cin>>n>>m;
    int res=n;
    for(;;){
        if(n>=m){
        x = n/m;
        y = n%m;
        res = res + x;
        if(x+y >= m){
            n = x+y;
        }
        else{
            break;
        }
        }
        else{
            break;
        }
    }
    cout<<res<<endl;
}
