#include<bits/stdc++.h>
using namespace std;
int main(){
string A="hello";
int j=-1,k=0,i;
string s2;
cin>>s2;
for(i=0;i<5;i++){
        j++;
       // cout<<j;

    while(j<s2.length()){
        if(A[i]==s2[j]){
            k++;
           break;
        }
        j++;
    }
}

if(k==5){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
