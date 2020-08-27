#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(b>a)
        {
            if((b-a)%2 == 1){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(a>b)
        {
            if((b-a)%2 == 0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}
