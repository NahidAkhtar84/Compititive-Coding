//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f1=0, f2= 0;
        for(int i=0; i< s.size(); i++){
            if(s[i]=='0'){
                f1 = 1;
            }
            if(s[i] == '1'){
                f2 = 1;
            }
            if(f1== '1' && f2 == '1'){
                break;
            }
        }
        string res=" ";
        if(f1 == 1 && f2 == 0){
            for(int i=0; i< 2*s.size(); i++){
                res = res + '0';
            }
        }
        else if(f1 == 0 && f2 == 1){
             for(int i=0; i< 2*s.size(); i++){
                res = res + '1';
            }
        }
        else{
            for(int i=0; i< s.size(); i++){
                res = res + "01";
            }
        }
        cout<<res<<endl;
    }
}
