#include<iostream>
using namespace std;
int main(){
     int n,i,j,position=-1,element;
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
    cout<<"Enter the element You want to delete :"<<endl;
    cin>>element;
    for(i=0;i<n;i++){
        if(arr[i]==element){
            cout<<"Element Matched !"<<endl;
            position=i;
            break;
        }

    }
    if(position==-1){
            cout<<"Array didn't match,,,"<<endl;
        }
        while(position>=0 && position<n){
        arr[position]=arr[position+1];
        position++;
    }
    if(position!=-1){
    n=n-1;
    }

    cout<<"The array after deletion : "<<endl;
    for(j=0;j<n;j++){
               cout<<"arr["<<j<<"]"<<" "<<arr[j]<<endl;
    }

}
