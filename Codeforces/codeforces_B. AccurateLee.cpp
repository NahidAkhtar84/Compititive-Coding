#include <bits/stdc++.h>
using namespace std;

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string s;
         cin>>s;
         int cnt=0;
         for(int i=s.length()-1; i>=0; i--){
            if(s[i] == '0'){
                cnt++;
            }
            else if(cnt != 0){
                if(cnt >1){
                    s.erase(i+1, cnt-1);
                    cnt=1;
                }
                s.erase(i, 1);
            }
         }
         cout<<s<<endl;
     }
 }
