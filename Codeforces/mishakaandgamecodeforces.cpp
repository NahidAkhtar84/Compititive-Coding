
#include<iostream>
using namespace std;
int main()
{
    int n;
    int a1,a2;
    int sum1=0,sum2=0;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0;i<n;i++)
        {
           cin>>a1>>a2;
           if(a1<1 && a1>6 && a2<1 && a2>6){
           break;
           }
           if(a1>a2){
            sum1++;
           }
           if(a1<a2){
            sum2++;
           }

        }
        if(sum1==sum2){
            cout<<"Friendship is magic!^^"<<endl;
        }
        if(sum1>sum2){
            cout<<"Mishka"<<endl;
        }
        if(sum1<sum2){
            cout<<"Chris"<<endl;
        }

    }
    return 0;
}
