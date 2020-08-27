//accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size(), res=10001;
        for(int i=0; i<n; i++)
        {
            int z1=0, o1=0, z2=0, o2=0;
            for(int j=0; j<i; j++)
            {
                if(s[j] =='0'){z1++;}
                if(s[j] == '1'){o1++;}
            }
            for(int j=i; j<n; j++)
            {
                if(s[j] =='0'){z2++;}
                if(s[j] == '1'){o2++;}
            }
            res = min(res, min(z1+o2, o1+z2));
        }
        cout<<res<<endl;
    }
}
