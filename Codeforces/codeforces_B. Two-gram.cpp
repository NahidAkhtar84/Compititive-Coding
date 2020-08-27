//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p;
    map<string, int> mp;
    for(int i=0; i<n-1; i++)
    {
        p = s.substr(i, 2);
        mp[p]++;
    }
    map<string, int>:: iterator it;
    int res=0;
    string ress;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        if(it ->second > res){
            res = it->second;
            ress = it ->first;
        }
    }
    cout<<ress<<endl;
}
