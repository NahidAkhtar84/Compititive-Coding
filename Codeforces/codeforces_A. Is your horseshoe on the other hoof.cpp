#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
     int n =0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
            n++;
    }
    if(n ==4){
       sort(arr, arr+4);
       int m=0;
       for(int j=0;j<4;j++){
          m++;
        if(arr[j] == arr[j+1]){
            m--;
        }
       }
       cout<<(4-m)<<endl;
    }
}
