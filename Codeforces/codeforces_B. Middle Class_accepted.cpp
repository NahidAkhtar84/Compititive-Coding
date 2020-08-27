#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> v;
        long long val=0;
        for(int i=0; i<n; i++)
        {
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        float tot=0, j=0;
        vector<int>:: iterator i;
        for (i = v.begin(); i != v.end(); ++i){
          tot = tot + *i;
          //cout<<"Entering1"<<endl;
          if(tot<x* (j+1)){
            //cout<<"Entering"<<endl;
            break;
          }
          j++;
        }
        cout<<j<<endl;
    }
}
