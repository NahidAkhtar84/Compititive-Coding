#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        string r1;
        r1= r1 + s1[0];
        for(int i=1; i< s1.size(); i=i+2){
            r1 = r1 + s1[i];
        }
        cout<<r1<<endl;
    }
}

