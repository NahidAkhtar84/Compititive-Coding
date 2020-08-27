#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the array size :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            arr[i]=0;
        }
    }
    cout<<"The aray elements are:"<<endl;
       for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    //-----------------------------------------------------
    int j,k,num,po=0,carrier,pos;
    for(j=0;j<n;j++){
            num=0;
        for(k=0;k<n;k++){
            if(arr[j]==arr[k]){
                num++;
            }
        }
    if(po<num){
        po=num;
        pos=j;
        carrier=arr[j];
    }
    }
    cout<<"Number which has highest occurance rate is : "<<carrier<<endl;
    cout<<"Position of the number is : "<<pos+1<<endl;

}
