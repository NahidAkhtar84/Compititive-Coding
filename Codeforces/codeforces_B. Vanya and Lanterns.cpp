#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >>n>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    double res=0.0;
    if(arr[0] != 0){
        res = arr[0];
    }
    if(arr[n-1] != l){
        if(l - arr[n-1] >res){
            res = l - arr[n-1];
        }
    }
  double mres;
    for(int j=0;j<n-1;j++){
        mres = (arr[j+1] - arr[j])/2.00;
        if(mres > res){
            res = mres;
        }
    }
    printf("%.10f\n",res);
}
