
#include<iostream>
using namespace std;
int main()
{
    int m,n,a;
    long long x,y;
    cin>>n>>m>>a;
    if(n>0 && m>0 && a>0){
    if(n%a==0){
        x=n/a;
    }
    if(n%a!=0){
        x=(n/a)+1;
    }
    if(m%a==0){
        y=m/a;
    }
    if(m%a!=0){
        y=(m/a)+1;
    }
    cout<<x*y<<endl;
    return 0;
    }

}
