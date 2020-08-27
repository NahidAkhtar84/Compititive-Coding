#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int count1[n-1],count2[n-1];
    int c1 =0, c2 =0,f1=0,f2=0;
    for(int i =0;i<n;i++){
        if(arr[i]%2 == 0){
            count1[f1]=i+1;
            c1++;
            f1++;
        }else{
            count2[f2]=i+1;
            c2++;
            f2++;
        }
    }
    if(c1 == 1){
        cout<<count1[0]<<endl;
    }
     if(c2 == 1){
        cout<<count2[0]<<endl;
    }

}
