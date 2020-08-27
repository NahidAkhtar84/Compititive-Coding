#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,res=0;
    cin>>n>>m;
    int arr[m];
    for(i=0;i<m;i++){
        cin>>arr[i];
    }
    res = arr[0]-1;
    for(j=0;j<m-1;j++){
        if(arr[j] <= arr[j+1]){
            res = res + arr[j+1] - arr[j];
        }else{
             res = res + (n - arr[j]) + arr[j+1];
        }
    }
    cout<<res<<endl;
}
