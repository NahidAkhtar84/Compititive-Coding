#include<bits/stdc++.h>
using namespace std;
int main(){
string s1;
int i,j,res;
cin>>s1;
res=s1.length();
for(i=0;i<s1.length();i++){
    for(j=i+1;j<s1.length();j++){
        if(s1[j]==s1[i]){
            res--;
            break;
        }
    }
}
if(res%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else if(res%2!=0){
    cout<<"IGNORE HIM!"<<endl;
}
return 0;
}
