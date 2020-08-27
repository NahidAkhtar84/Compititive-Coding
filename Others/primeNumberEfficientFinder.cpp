#include<iostream>
using namespace std;
int main(){


    int N,x=1,count2=0;
    int arr[1001];

    arr[0]=1;
    for(int i=2;i<=1001;i++){
      int counter1=0;
        for(int j=2;j*j<=i;j++){

        if(i%j==0){
            counter1++;
            break;

        }

}
    if(counter1<1){
            arr[x]=i;
            x++;
        }

 }

 while(cin>>N){
    int data[N];
    for(int i=0;i<=N;i++){
        if(arr[i]<N){
        data[count2]=arr[i];
        count2++;
        }
        else
            break;
    }


     //'''''''''''''''''''''''''''''''''''''''''''''''

 for(int j=0;j<count2;j++){
    cout<<data[j]<<endl;
 }
  cout<<"Reverse order "<<endl;
 for(int i=count2-1;i>0;i--){
     cout<<data[i]<<endl;
 }
 }


    return 0;
}


