#include<iostream>
using namespace std;
int  main()
{
    int n,h;
    cin>>n>>h;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=h){
            sum=sum+1;
        }else{
            sum=sum+2;
        }
    }

    cout<<sum<<endl;

}
