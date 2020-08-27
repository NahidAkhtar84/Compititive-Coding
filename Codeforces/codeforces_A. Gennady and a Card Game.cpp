#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2[5];
    for(int i=0; i<5; i++)
        {
            cin>>s2[i];
        }
        int key=0;
        for(int i=0; i<5; i++){
            if(s2[i][0] == s1[0] || s2[i][1] == s1[1]){
                key++;
                break;
            }
        }
        if(key == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}
