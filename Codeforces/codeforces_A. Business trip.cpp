//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[12];
    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+12);
    int ans=0, cnt=0, f=0;
    for(int i=11; i>=0; --i){
       if(ans>= n){
            f=1;
            break;
       }
       else{
        ans = ans+arr[i];
        cnt++;
       }
    }
    if(f==1 || ans >= n){
        cout<<cnt<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
