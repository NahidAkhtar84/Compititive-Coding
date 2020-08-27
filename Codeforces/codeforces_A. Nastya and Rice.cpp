#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        int buf1=0, buf2=0, lim1=0, lim2=0;
        buf1 = a-b;
        buf2 = a+b;
        lim1=c-d;
        lim2 = c+d;
        int clc=0;
        if(n*buf2 < lim1 || n*buf1 > lim2)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
