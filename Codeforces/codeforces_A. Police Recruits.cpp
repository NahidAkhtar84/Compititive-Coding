#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int enf=0, crime =0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
        if(arr[i]< 0){
            if(enf > 0){
                enf = enf + arr[i];
            }
            else{
                crime = crime + arr[i];
            }
        }
        if(arr[i] > 0){
            enf = enf + arr[i];
        }
    }
    cout<< crime*(-1)<<endl;
}
