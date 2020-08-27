#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s1;
        cin>>s1;
        int z=k, cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s1[i] == '0'){
                z++;
            }
            if(s1[i] == '1')
            {
                z = z-k;
                cnt = cnt + z/(k+1);
                z=0;
            }
        }
        cnt = cnt + z/(k+1);
        cout<<cnt<<endl;
    }
}
