#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a.length()<101 && b.length()<101 && a.length()==b.length()){
        for(int i=0;i<a.length();i++){
            a[i]=tolower(a[i]);
            b[i]=tolower(b[i]);
        }

        if(a<b){
            cout<<-1<<endl;
        }
        else if(a>b){
            cout<<1<<endl;
        }
        else if(a==b){
            cout<<0<<endl;
        }
    }

    return 0;
}
