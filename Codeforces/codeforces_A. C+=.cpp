#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        int res=0, tmp=0;
        while(res<= n){
            tmp++;
            res = a +b;
            b = max(a, b);
            a = res;
        }
        cout<<tmp<<endl;
    }
}
