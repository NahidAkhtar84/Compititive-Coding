#include<bits/stdc++.h>
using namespace std;
int arr[200040];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        k-=2;
        arr[0]=arr[n+1]=1e9;
        int res=0, ans=0, l=0;
        for(int i=1; i<=n; i++){
            if(arr[i]>max(arr[i-1], arr[i+1]) ){
                res++;
            }
            if(i>k){
                if(arr[i-k] >max(arr[i-k-1], arr[i-k+1])){
                    res--;
                }
            }
            if(res> ans){
                ans = res;
                l = i-k-1;
            }
        }
        cout<<ans+1<<" "<<max(0, l)+1<<endl;
    }
}
