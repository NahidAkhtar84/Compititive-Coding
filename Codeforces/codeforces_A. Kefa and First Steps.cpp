#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0,cup=0;
    for(j=1;j<n;j++){
        if(arr[j-1]<=arr[j]){
            flag++;
            if(flag>cup){
                cup=flag;
            }
        }
        else{
            flag=0;
        }
    }
    cout<<cup+1<<endl;
    return 0;
}
