//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[200001];
    long long x;
    for(long long i=0; i<n; i++)
    {
        cin>>x;
        a[x] = i;
    }
    map<long long, int> mp;
    for(long long i=0; i<n; i++)
    {
        cin>>x;
        mp[(n+a[x]-i)%n]++;
    }
    map<long long, int>::iterator it;
    int ans =0;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        ans = max(ans, it -> second);
    }
    cout<<ans<<endl;
}
