#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int co=0;
        for(int i=0; i<n-1;i++){
        if(arr[i] == arr[i+1]){
            co++;
        }
    }
    cout<<co<<endl;
}
