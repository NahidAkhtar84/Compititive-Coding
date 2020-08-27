#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    char arr[1001];
    cin>>input;
        arr[0]=toupper(input[0]);
    for(int i=1;i<input.length();i++){
           arr[i]=input[i];
    }

    for(int i=0;i<input.length();i++){
        cout<<arr[i];
    }
return 0;
}
