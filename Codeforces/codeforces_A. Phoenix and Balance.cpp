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
     int num = floor(n/2)+1;
     int res = pow(2, num)-2;
     cout<<res<<endl;
}
}
