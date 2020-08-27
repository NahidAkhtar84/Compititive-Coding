#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ajj[256];
    int i;
    for(i=1;;i++)
    {
        cin>>ajj;
        if(ajj[0]=='H'){
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        }
        if(ajj[0]=='U')
        {
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
        }
        if(ajj[0]=='*'){
            break;
        }
    }
    return 0;
}
