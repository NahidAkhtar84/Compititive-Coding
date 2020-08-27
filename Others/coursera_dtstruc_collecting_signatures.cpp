//Accepted
#include<bits/stdc++.h>
#include <set>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n;
    cin>>n;
    vector< pair <long long, long long> > v;
    for(int i=0; i<n; i++)
    {
        int v1, v2;
        cin>>v1>>v2;
        v.push_back( make_pair(v1, v2) );
    }
    sort(v.begin(), v.end(), sortbysec);
    long long ll= v[0].first, ul=v[0].second;
    set<long long> st;
    st.insert(v[0].second);
    for(int i=1; i<n; i++)
    {
        ll = v[i].first;
        if(ll > ul)
        {
            ul = v[i].second;
            st.insert(v[i].second);
        }

    }
    set<long long>::iterator it;
    cout<<st.size()<<endl;
    for(it = st.begin(); it != st.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<'\n';
}
