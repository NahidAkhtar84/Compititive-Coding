//https://www.sanfoundry.com/dynamic-programming-solutions-boredom-problem/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int a, b;
    int i, j, x;
    cin>>n;
    map<int, int> mp;
    map<int, int> :: iterator it;

    for(i=0; i<n; i++){
        cin>>x;
        if(mp.find(x) != mp.end()){
            mp[x]++;
        }
        else{
            mp[x] = 1;
        }
    }

    int mpSize = mp.size();
    vector< pair< int, long long int> > vp(mpSize+1);
    vp[0].first = 0;
    vp[0].second = 0;
    for(it=mp.begin(), i=1; it != mp.end(); i++, it++){
        vp[i].first = it ->first;
        a = it ->first;
        b = it ->second;
        vp[i].second = a*b;
    }

    for(i =2; i<=mpSize; i++){
        j = i - 1;
        if(vp[i].first == vp[j].first+1){
            j--;
        }
        vp[i].second = vp[i].second + vp[j].second;
        vp[i].second = max(vp[i].second, vp[i-1].second);
    }
    cout<<vp[mpSize].second<<endl;
}
