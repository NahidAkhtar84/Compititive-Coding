#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    sort(arr1, arr1+n);
    int q;
    cin>>q;
    long long arr2[q];
    for(int i=0; i<q; i++){
        cin>>arr2[i];
    }
    for(int i=0; i<q; i++){
    cout<<upper_bound(arr1, arr1+n, arr2[i])-arr1<<endl;
    }
}
