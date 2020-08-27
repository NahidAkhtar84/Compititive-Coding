//Accepted
#include<bits/stdc++.h>
using namespace std;
long long arr[500005], n, ans=0, f=0;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i]= arr[i]+arr[i-1];
    }
     for(int i=0; i<n-1; i++)
     {
         if(3*arr[i] == 2*arr[n-1]){
            ans +=f;
         }
         if(3*arr[i] == arr[n-1])
         {
             f++;
         }
     }
    cout<<ans<<endl;

}
