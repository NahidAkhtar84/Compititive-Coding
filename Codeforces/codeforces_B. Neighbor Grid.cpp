#include<bits/stdc++.h>
using namespace std;
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
        //.....
        bool a=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int w=0;
                if(i > 0)w++;
                if(i < n-1)w++;
                if(j > 0)w++;
                if(j < m-1)w++;
                if(arr[i][j] > w){
                    a= true;
                    break;
                }
                arr[i][j]=w;
                }
            if(a == true){
                    break;
            }
        }
        if(a == true){
                cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
