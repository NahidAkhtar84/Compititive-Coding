#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int res=0;
    for(int i=0; i< s.length(); i++){
        if(s[i] == '1'){
            res = res+a1;
        }
        if(s[i] == '2'){
            res = res+a2;
        }
        if(s[i] == '3'){
            res = res+a3;
        }
        if(s[i] == '4'){
            res = res+a4;
        }
    }
    cout<<res<<endl;
}
