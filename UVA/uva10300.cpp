
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    long int a,b,c,d,sum=0;
    cin>>t;
     for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){

            cin>>a>>b>>c;
            sum = sum+(a*c);
        }
        cout<<sum<<endl;
        sum =0;
     }
     return 0;
}
