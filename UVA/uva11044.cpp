#include<iostream>
using namespace std;
int main(){
int r,c;
int t,i;
cin>>t;
for(i=t;i>0;i--)
{
    cin>>r>>c;
    cout<<((r/3)*(c/3))<<endl;
}
return 0;
}
