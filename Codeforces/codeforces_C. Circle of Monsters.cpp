//Time Limit Exceeds was occured cz we used cin and cout instead of scanf and printf
//ACCEPTED
#include<bits/stdc++.h>
using namespace std;
main(){
long long i,j,k,l,m,n,o,p;
cin>>p;
while(p--){
        cin>>n;
    long long x[n],y[n];
    l=100000000000000;
     k=0;
    for(i=0;i<n;i++){
    //cin>>x[i]>>y[i];
    scanf("%lld %lld",&x[i],&y[i]);
    l=min(l,min(x[i],y[i]));
    if(i!=0&&x[i]>y[i-1])
        {
             k+=(x[i]-y[i-1]);
        }
    }
    if(x[0]>y[n-1])k+=(x[0]-y[n-1]);
     k+=l;
    printf("%lld \n",k);
}
}

