//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int v;
            cin>>v;
            s.insert(v);
        }
        if(s.size() > k){
            cout<<-1<<endl;
        }
        else{
            //The Spart ***
            for(int i=1; s.size()<k; i++) s.insert(i);
            cout<<n*k<<endl;
            set<int>::iterator it;
            for(int i=0; i<n; i++){
                for(it = s.begin(); it != s.end() ; ++it){
                    cout<<*it<<" ";
                }
            }
            cout<<"\n";
        }
    }
}
