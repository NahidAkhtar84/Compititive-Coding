#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int r, c;
        cin>>r>>c;
        if(r*c %2 ==0)
        {
            cout<<(r*c)/2<<endl;
        }
        else{
            cout<<(r*c)/2+1<<endl;
        }
    }

}
