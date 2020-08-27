#include<iostream>
using namespace std;
int main(){
    int n,i,j,position;
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<" "<<arr[i]<<endl;
    }

    cout<<"Enter the position what you want to delete : "<<endl;
    cin>>position;
    while(position<n){
        arr[position]=arr[position+1];
        position++;
    }
    n=n-1;
    cout<<"The array after deletion : "<<endl;
    for(j=0;j<n;j++){
               cout<<"arr["<<j<<"]"<<" "<<arr[j]<<endl;
    }
}

