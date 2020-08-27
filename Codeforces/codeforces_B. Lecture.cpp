#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m;
cin>>n>>m;
string arr[m][2];
for(int i=0; i<m;i++){
    for(int j=0; j<2; j++){
        cin>>arr[i][j];
    }
}
string str[n];
for(int i=0; i<n; i++){
    cin>>str[i];
}

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            if(str[i] == arr[k][0]){
                int len1 = arr[k][0].size();
                int len2 = arr[k][1].size();
                if(len2<len1){
                    str[i] = arr[k][1];
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }

}
