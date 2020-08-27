#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int var=4;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        int y=0
        char arr[100001];
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            arr[y]=s[i];
            y++;
        }
           for(int i=0;i<y;i++)
        {
            if(arr[i]==arr[i+1] && arr[i]!='W' ){
                return;
            }
            else{
                if(arr[i]='W' && arr[i]==arr[i+1]){
                    cout<<var<<endl;
                }
                else if()
            }
        }
    }
}
