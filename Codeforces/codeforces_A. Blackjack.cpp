#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<11 || n>21){
        cout<<0<<endl;
    }
    else{
        if(10 >n-10 >0)
        {
            cout<<4<<endl;
        }
        else if(n-10 == 11)
        {
            cout<<4<<endl;
        }
        else if(n ==20){
            cout<<15<<endl;
        }
    }
    return 0;
}
