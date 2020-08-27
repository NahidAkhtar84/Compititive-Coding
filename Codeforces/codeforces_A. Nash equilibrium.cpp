#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int x= m+1, y=0, f=0;
    for(int i=0; i<n-1; i++){
        int co=0;
        for(int j=0; j<m; j++){
            if(arr[i][j] != arr[i+1][j]){
                co++;
            }
        }
    if(co>0){
        f=1;
        x= min(x, co);
        y = max(y, co);
    }
    }
    if(f ==1){
        cout<<x<<" "<<y<<endl;
    }else{
        cout<<0<<" "<<0<<endl;
    }
}
