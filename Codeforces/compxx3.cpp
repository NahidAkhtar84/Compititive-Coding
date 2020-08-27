#include<iostream>
using namespace std;
int main()
{
    int T,a,b,c,i;
    cin>>T;
    if(T>0 && T<20){
            for(i=1;i<=T;i++){
        cin>>a>>b>>c;
        if(a>=1000 && a<=10000 && b>=1000 && b<=10000 && c>=1000 && c<=10000 && a!=b && b!=c && c!=a)
        {
            if(a>b && a<c){
            cout<<"Case "<<i<<": "<<a<<endl;
            }
            if(a>c && a<b){
            cout<<"Case "<<i<<": "<<a<<endl;
            }
             if(b>a && b<c){
            cout<<"Case "<<i<<": "<<b<<endl;
            }
            if(b>c && b<a){
            cout<<"Case "<<i<<": "<<b<<endl;
            }
             if(c>b && c<a){
            cout<<"Case "<<i<<": "<<c<<endl;
            }
            if(c>b && c<a){
            cout<<"Case "<<i<<": "<<c<<endl;
            }
        }
    }
    }
    return 0;
}
