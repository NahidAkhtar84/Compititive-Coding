#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            long long arr[n];
            for(int i=0; i<n; i++)
            {
            cin>>arr[i];
            }
            sort(arr, arr+n);
            long long a=1, bf=0;
            for(int i=0; i<n; i++)
            {
                if(a+bf >= arr[i])
                {
                    a = a+ bf+1;
                    bf=0;
                }
                else
                {
                    bf++;
                }
            }
            cout<<a<<endl;
        }


}
