#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, x, y;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        long long res=0;
        for(int i=0; i<n; i++)
        {
            int cnt=0, buff=0;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j] == '.'){
                    buff = buff +x;
                    cnt++;
                    //cout<<"b"<<buff<<endl;
                }
                else if(arr[i][j] == '*' && cnt <2)
                {
                    res = res + buff;
                    buff=0;
                    cnt=0;
                }
                if(cnt ==2){
                    res = res + min(buff, y);
                    cnt=0;
                    buff=0;
                }
            }
            if(buff >0){
                res = res+buff;
            }
        }
        cout<<res<<endl;
    }
}
