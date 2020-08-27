#include<iostream>
using namespace std;
int main(){
    int n,i,j,item,loc;
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
    cout<<"Taking Item as input : "<<endl;
    cin>>item;
    arr[n+1]=item;
    loc=1;
    while(arr[loc]!=item){
        loc++;
    }
    if(loc==n+1){
        cout<<"Item not found in the array"<<endl;
    }
    else{
             // why loc???not loc-1....
            //When arr[loc] matches with the item then it doesn't go into the loop ,,
            //so loc remains in previous value,,what is the array index
        cout<<"Item Found at : "<<loc<<endl;
    }

}
