#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    arr[0] =0;
    arr[1]  =1;
    if(n>=2){
    for(int i=2; i<=n; i++){
        arr[i] = arr[i-1]%10+arr[i-2]%10;
    }
    }
 cout<<arr[n]%10<<endl;
}
