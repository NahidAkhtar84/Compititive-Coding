#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, evn=0, odd=0, res;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0){
                evn++;
            }
            else{
                odd++;
            }
        }
        if(odd%2 ==0){
            odd--;
        }
        if(odd<0){
                cout<<"NO"<<endl;
        }else{
        if(x>= odd)
        {
            x = x-odd;
            if(evn >= x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(x%2 == 1)
            {
                cout<<"YES"<<endl;
            }
            else{
                if( evn >= 1){
                    cout<<"YES"<<endl;
                }
                else{cout<<"NO"<<endl;}
            }
        }
    }
    }
}
