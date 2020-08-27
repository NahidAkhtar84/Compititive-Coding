#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    if(1<=n && n<=100){
       for(i=1;i<=n;i++){
         cin>>x;
         if(1<=x && x<=100){
         if(x%3==0 || x%3==7){
            cout<<"YES"<<endl;
         }
         else if(x%7==0 || x%7==3){
           cout<<"YES"<<endl;
         }

         else
         {
             cout<<"NO"<<endl;
         }
         }
       }
    }
    return 0;
}
