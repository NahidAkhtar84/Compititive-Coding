#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        set <int> st;
        int val;
        for(int i=0; i<n; i++){
            cin>>val;
            st.insert(val);
        }
        int res=0;
        while(x){
            res++;
            if(!st.count(res)){
                x--;
            }
        }
        while(st.count(res+1)){
            res++;
        }
        cout<<res<<endl;
    }
}
