#include<iostream>
using namespace std;
int k=1,temp=0,arr[20];
SortAges(int n){
    while(k<n-1){
        int ptr=0;
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
    cout<<"Sorted ages are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int i,n;
    int FriendsAge[16];
    for(i=0;i<16;i++){
        cin>>FriendsAge[i];
        if(FriendsAge[i]<=0 || FriendsAge[i]>110){
            FriendsAge[i]=0;
        }
    }

    cout<<"Showing the ages "<<endl;
    for(i=0;i<16;i++){
            arr[i]=FriendsAge[i];
        cout<<"Age of Friend "<<i+1<<" is : "<<FriendsAge[i]<<endl;
    }
    n=16;
    SortAges(n);

}
