#include<iostream>
using namespace std;
int main()
{

    long long m,n,a;
    cin>>m>>n>>a;
    if(n>=1 && m>=1 && a>=1)
    {
    long double x,y;
    x=m/a;
    y=n/a;
    if(m%a!=0){x=x+1;}
    if(n%a!=0){y=y+1;}
    cout<<x*y<<endl;
    }
    return 0;
}
