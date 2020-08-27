//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long incash=0, infcash=0;
    int f=0;
     for(int i=0; i<n; i++)
    {
        if(arr[i] == 25){
            incash = incash+arr[i];
        }
        else if(arr[i] == 50){
            if(incash < arr[i]-25){
                f=1;
                break;
            }
            else{
                incash = incash - (arr[i]-25);
                infcash = infcash +50;
            }
        }
        else{
            if(infcash>0 && incash> 0){
                infcash = infcash-50;
                incash = incash - 25;
            }
            else if(incash>=75){
                incash = incash - 75;
            }
            else{
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
