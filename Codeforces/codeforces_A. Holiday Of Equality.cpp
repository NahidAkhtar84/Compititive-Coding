#include<bits/stdc++.h>
using namespace std;
int findingMaximumValue(int arr[], int n)
{
    int max_val = arr[0];
    for(int i =1; i<n; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    return max_val;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max_val = findingMaximumValue(arr, n);
    int res =0;
    for(int i =0; i<n;i++){
        res = res + (max_val - arr[i]);
    }
    cout<<res<<endl;
}
