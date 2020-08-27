// Not as efficient as bubble sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={14,13,18,15,7};
    int temp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k=0;k<5;k++){
        cout<<"["<<k<<"]"<<"="<<arr[k]<<endl;
    }
}
