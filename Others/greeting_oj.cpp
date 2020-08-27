#include<iostream>
using namespace std;
int main()
{
   int sum,n;
   int a,b;
   cin>>n;
   if(n>0 && n<=125){
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>=0 && a<=10 && b>=0 && b<=10){
        cout<<"Case "<<i<<": "<<a+b<<endl;
        }

    }
   }
    return 0;
}
