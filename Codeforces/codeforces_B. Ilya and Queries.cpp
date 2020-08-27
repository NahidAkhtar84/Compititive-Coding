#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n;
cin>>n;
int arr[s.length()];
arr[0]=1;
for(int i=0; i<s.length(); i++){
    if(s[i] == s[i+1]){
        arr[i+1] = arr[i] +1;
    }
    else{
        arr[i+1] = arr[i];
    }
}
int n1, n2;
for(int i=0; i<n; i++){
    cin>>n1>>n2;
    cout<<arr[n2-1] - arr[n1-1]<<endl;
}

}
