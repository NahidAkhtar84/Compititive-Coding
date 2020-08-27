#include<iostream>
using namespace std;
int main()
{
    int t,j,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int n;
       cin>>n;
       int coutt=1;
       int arr[n];
       for(j=0;j<n;j++)
       {
           cin>>arr[j];

       }
       for(k=0;k<n;k++){
        if(arr[k+1]-arr[k]==1){
        cout<<"Case "<<i<<": "<<"Yes"<<endl;
        break;
        }
        coutt++;
        if(coutt==n){
        cout<<"Case "<<i<<": "<<"No"<<endl;
       }

       }

    }
    return 0;

}
