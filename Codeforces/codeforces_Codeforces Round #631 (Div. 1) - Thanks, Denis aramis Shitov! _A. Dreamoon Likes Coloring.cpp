#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int res=1;
        int arr[n+1];
        arr[0]=0;
        for(int i=1; i<n+1; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n+1);
        int i;
        for(i=1; i<n+1; i++)
        {
            int buff=0;
            if(arr[i]-arr[i-1] >1){
                buff = arr[i] - arr[i-1];
                buff--;
            }
            if(m>0){
                m = m-buff;
            }
            if(m<=0){
                break;
            }

        }
        if(m == 0){
            res = arr[i];
        }
        if(m< 0){
            res = arr[i-1];
        }
        if(n == i-1 && m>0){
                    res = arr[i-1]+ m;
                }
    cout<<res<<endl;
    }
}
