#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        int cnt1=0, cnt2=0, re1=0, re2=0;
        for(int i=0; i<n; i++)
        {
            cnt2=0;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j] == 0){
                    cnt2++;
                }
            }
            if(cnt2 == m){
                re1++;
            }
        }
        for(int j=0; j<m; j++)
        {
            cnt1=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i][j] == 0){
                    cnt1++;
                }
            }
            if(cnt1 == n){
                re2++;
            }
        }
        int res = min(re1, re2);
        if(res%2 ==0){
            cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
}
