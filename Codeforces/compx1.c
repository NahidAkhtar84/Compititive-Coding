#include<iostream>
using namespace std;
int main()
{
    int m,n,a;
    float x,y;
    cin>>m>>n>>a;
    if(m%a==0){
        x=m/a;
    }
    if(m%a!=0){
        x=(m/a)+1;
    }
    if(n%a==0){
        y=n/a;
    }
    if(n%a!=0){
        y=(n/a)+1;
    }
    cout<<x*Y<<endl;
    return 0;

}
