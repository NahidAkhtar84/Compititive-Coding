#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], arr1[n], t=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr1[0] = arr[0];
    for(int i=1; i<n; i++){
        arr1[i] = arr1[i-1] + arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
        cout<<lower_bound(arr1, arr1+n, arr2[i]) - arr1+1<<endl;
    }

}
