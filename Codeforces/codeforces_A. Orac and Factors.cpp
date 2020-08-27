//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long n, k, p;
        cin>>n>>k;
        for(int i=2; i< n+1; i++)
        {
            if(n%i ==0){
                p=i;
                break;
            }
        }
        cout<<n+p+(k-1)*2<<endl;
    }
}
