#include<iostream>
using namespace std;
int main(){
    int N,c,x=1;
    int prn,arr[1000];
    cin>>N>>c;
    arr[0]=1;
    for(int i=2;i<=N;i++){
            int counter1=0;
            int m=i/2;
        for(int j=1;j<=m;j++){
        if(i%j==0){
            counter1++;
        }
        }
        if(counter1<=1){
            arr[x]=i;
            x++;
        }
    }
    //'''''''''''''''''''''''''''''''''
    for(int k=0;k<x;k++){
        cout<<arr[k]<<endl;
    }
    cout<<"Array ends here,,,,,"<<endl;
//'''''''''''''''''''''''''''''''''''''''
return 0;
}
