#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
         int sum=0, cnt=0, tmp=0, f=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 ==1){
                cnt++;
                if(tmp != arr[i]){
                    f++;
                    tmp = arr[i];
                }
            }
        }
      if(cnt%2 == 1){
        cout<<"YES"<<endl;
      }
      else{
        if(f>1 && cnt != n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }


    }
}
