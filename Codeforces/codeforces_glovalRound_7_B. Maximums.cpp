#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x=0;
    for(int i=0; i<n; i++){
        arr2[i] = arr[i]+x;
        cout<<arr2[i]<<" ";
        x = max(x, arr2[i]);
    }
}
