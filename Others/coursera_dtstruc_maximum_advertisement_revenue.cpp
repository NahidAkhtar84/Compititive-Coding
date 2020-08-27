//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n], brr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     for(int i=0; i<n; i++){
        cin>>brr[i];
    }
    sort(arr, arr+n, greater<int>());
    sort(brr, brr+n, greater<int>());
    long long sum=0;
    for(int i=0; i<n; i++){
        sum = sum + (arr[i] * brr[i]);
    }
    cout<<sum<<endl;

}
