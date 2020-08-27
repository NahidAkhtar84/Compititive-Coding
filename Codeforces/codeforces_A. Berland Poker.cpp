#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, m, k;
        cin>>n>>m>>k;
        int w = min(n/k, m);
        double baki = m - w;
        double j = ceil(baki/(k-1));
        cout<<w - j<<endl;
    }
}
