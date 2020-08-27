#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        string r="";
        for(int j=0;j<s.size(); j++)
        {
            int c = int(s[j])-48;
            for(int k=0; k<c; k++){
                r=r+'(';
            }
            r=r+s[j];
                while(s[j] == s[j+1]){
                    r=r+s[j];
                    j++;
                }

            for(int k=0; k<c; k++){
                r=r+')';
            }
        }

        cout<<"Case #"<<i+1<<": "<<r<<endl;
    }
}
