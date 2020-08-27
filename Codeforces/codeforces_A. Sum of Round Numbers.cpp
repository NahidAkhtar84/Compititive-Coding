//Accepted
#include<bits/stdc++.h>
#include <string>
using namespace std;
unsigned int len(unsigned int n)
{
    return n ? len(n/10)+1 : 0;
}

int main()
{
    //cout<<pow(10, 6)<<endl;
    int t;
    cin>>t;
    int arr[t];
    for(int j=0; j<t; j++)
    {
        cin>>arr[j];
        int n = len(arr[j]);
        int cnt=1;
        int iko = pow(10.0, n-1);
        //cout<<n-1<<"iko"<<iko<<endl;
        int brr[n];
        for(int i =0; i< n; i++)
        {
            if(arr[j]%iko == 0 || arr[j]/iko == 0)
            {
                brr[i]=arr[j];
                break;
            }
            else
            {
                brr[i] = (arr[j]/iko)*iko;
                arr[j] = arr[j]%iko;
                cnt++;
                int m = len(arr[j]);
                iko =pow(10.0, m-1);
            }
        }
        cout<<cnt<<endl;
        for(int i=0; i< cnt; i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
}
