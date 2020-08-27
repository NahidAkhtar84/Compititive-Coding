#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e=0, o=0;
    cin>>n;
    while(n--)
    {
        int v;
        cin>>v;
        if(v%2 == 0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    if(o%2 ==1){
        cout<<o<<endl;
    }
    else{
        cout<<e<<endl;
    }
}
