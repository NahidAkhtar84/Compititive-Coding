#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <long long, int> mp;
    long long val;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        mp.insert(make_pair(val, mp[val]++));
    }
    map <long long, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        if(it->second > (n/2)){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}
