#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        arr[i] =1;
    }
    for(int i =1; i<n;i++){
        for(int j=0;j<n-1;j++){
            arr[j+1] = arr[j] + arr[j+1];
        }
    }
    cout<<arr[n-1]<<endl;
}
