#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector< pair <int,int> > v;
    int t1=0, t2=0;
    v.push_back(make_pair(t1,t2));
    int x=0;
    n = n+1;
    while(n--)
    {
        v.push_back(make_pair(t1,t2+1));
        v.push_back(make_pair(t1+1,t2));
        v.push_back(make_pair(t1+1,t2+1));
        x = x+3;
        t1 = t1+1;
        t2 = t2+1;
    }
    vector< pair <int,int> >::iterator it;
    cout<<v.size()<<endl;
    for(it = v.begin(); it != v.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
