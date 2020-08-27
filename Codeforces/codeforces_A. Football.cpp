#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inputStr;
    char arr[101];
    cin>>inputStr;
    char f = inputStr[0];
   // cout<<f<<endl;
    int co=1;
    for(int i=1; i< inputStr.length(); i++){
        if(f == inputStr[i]){
            f = inputStr[i];
            co++;
            if(co >=7){
                break;
            }
        }
        else{
            f = inputStr[i];
            co = 1;
        }
    }
   // cout<<co<<endl;
    if(co>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
