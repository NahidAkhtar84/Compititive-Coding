#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b;
cin>>t;
while(t--){
cin>>a>>b;
string s(a,'a');
int p=2;
while(b>p-1){
    b=b-(p-1);
    p++;
}
s[a-p]='b';
s[a-b]='b';
cout<<s<<endl;
}
}
