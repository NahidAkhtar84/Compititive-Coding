#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int res =0;
for(int i=1; i<n; i++){
        int c1 =0, c2=0;
    for(int j=0; j<i; j++){
        if(arr[i] > arr[j]){
            c1++;
        }
        if(arr[i] < arr[j]){
            c2++;
        }
    }
    if(c1 == i || c2 == i){
        res++;
    }
}
cout<<res<<endl;
}
