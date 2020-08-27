#include<bits/stdc++.h>
using namespace std;
int main(){
    int power1, n;
    cin>>power1>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
//sorting starts
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j][0]>arr[j+1][0])
            {
                swap(arr[j][0],arr[j+1][0]);
                swap(arr[j][1],arr[j+1][1]);
            }
        }
    }
//sorting ends
    int flag = -1;
    if(power1 > arr[0][0]){
        flag = 1;
        arr[0][0]=power1;
    }
    else{
        flag = -1;
    }
    if(flag == 1){
        int conf =0;
        for(int i=0;i<n-1;i++){
            conf = arr[i][0] + arr[i][1];
            if(conf > arr[i+1][0]){
                flag = 1;
                arr[i+1][0] = conf;
            }
            else{
                flag = -1;
                break;
            }

        }
    }

    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
