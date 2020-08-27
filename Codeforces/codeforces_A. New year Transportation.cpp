#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    int i;
    cin>>n>>x;
    int arr[n];
    for(i=0; i<n-1; i++){
        cin>>arr[i];
    }
    int r =0;
    while(r < x-1){
        r = r + arr[r];
    }
if(r == x -1){
            cout<<"YES"<<endl;
        }
else{
            cout<<"NO"<<endl;
        }
}
