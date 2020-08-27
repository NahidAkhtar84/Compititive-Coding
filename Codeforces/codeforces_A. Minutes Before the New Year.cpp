//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h, m, t=0, ans=0;
        cin>>h>>m;
        t = h*60+m;
        ans = 1440 - t;
        cout<<ans<<endl;
    }
}
