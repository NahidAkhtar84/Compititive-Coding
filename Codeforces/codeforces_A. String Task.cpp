#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inputStr;
    char arr[101];
    cin>>inputStr;
int w=inputStr.length();
    for(int i=0;i<w;i++){
        inputStr[i]=tolower(inputStr[i]);
        //cout<<inputStr[i]<<endl;
    }
    int x=0;
        for(int i=0;i<w;i++){
                if(inputStr[i]!='a' && inputStr[i]!='e' && inputStr[i]!='o' && inputStr[i]!='y' && inputStr[i]!='u' && inputStr[i]!='i' ){
                        arr[x]=inputStr[i];
                        x++;
                }

    }
           for(int i=0;i<x;i++){
             cout<<"."<<arr[i];
    }


return 0;
}

