#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum =0, co=0;
    cin>>n;
    if(n == 1){
        co++;
        cout<<co<<endl;
    }
    else{
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
    {
        sum = sum + arr[i];
    }
    int sum2 = arr[n-1];
    for(int i = n-2; i>=0; i--)
    {
        if(sum2 > sum){
            co++;
            break;
        }
        else{
            sum2 = sum2 + arr[i];
            sum = sum - arr[i];
            co++;
        }
        if(i ==0){
            co++;
        }
    }
    cout<<co<<endl;
    }
}
