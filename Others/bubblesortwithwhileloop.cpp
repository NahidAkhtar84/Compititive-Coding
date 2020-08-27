#include<iostream>
using namespace std;
int main(){
    int n,i,k=1,temp=0,j;
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
    //Bubble sort starts from here,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
    //***ptr must not declare globally;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    while(k<n-1){
    int  ptr=0;
    while(ptr<n-k){
        if(arr[ptr]>arr[ptr+1]){
            temp=arr[ptr];
            arr[ptr]=arr[ptr+1];
            arr[ptr+1]=temp;
        }
        ptr++;
    }
    k++;
    }
    cout<<"Array After Bubble Sorting"<<endl;
    for(j=0;j<n;j++){
                cout<<"arr["<<j<<"]"<<" "<<arr[j]<<endl;
    }

return 0;
}

