#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxi =0;
int maxn = arr[0];
int mini =0;
int minn = arr[n-1];
for(int j=0;j<n;j++){
    if(maxn<arr[j]){
        maxi =j;
        maxn = arr[j];
    }
        if(minn >= arr[j]){
        mini =j;
        minn = arr[j];
    }
}
int res;
if(mini>maxi){
    res = maxi + (n - (mini+1));
}else{
    res = maxi + (n - (mini+1)) - 1;
}
cout<<res<<endl;
}
