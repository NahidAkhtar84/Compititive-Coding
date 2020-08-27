#include<iostream>
using namespace std;
int main()
{
    int i,j,T,a,b;
    cin>>T;
    if(1<=T<=100){
    for(i=1;i<=T;i++)
    {
        cin>>a>>b;
        if (0 <= a <= b <= 100){
        int sum=0;
         if(a%2!=0){
            for(j=a;j<=b;j=j+2)
            {
                sum=sum+j;
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
        else
        {
            for(j=a+1;j<=b;j=j+2){
                sum=sum+j;
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
    }
    }
}
return 0;
}
