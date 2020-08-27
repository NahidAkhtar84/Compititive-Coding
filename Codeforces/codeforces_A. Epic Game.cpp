#include<bits/stdc++.h>
using namespace std;
int GCD(int n1, int n2)
{
        while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
int main()
{
    int a, b, n;
    cin>>a>>b>>n;
    while(n>0)
    {
        n = n - GCD(a, n);
        if(n<=0){
            cout<<0<<endl;
            break;
        }
        n = n - GCD(b, n);
        if(n<=0){
            cout<<1<<endl;
            break;
        }
    }
}
