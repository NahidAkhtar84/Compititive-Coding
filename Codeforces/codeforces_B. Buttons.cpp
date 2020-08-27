//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long res;
    res = (n-1)*n*(n+1)/6 + n;
    cout<<res<<endl;
}
