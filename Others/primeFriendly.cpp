#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        //...............
           int N,x=1,count2=0;
    long long int arr[1000001];

    arr[0]=1;
    for(int i=2;i<=1000001;i++){
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

int z1,z2,arr[20],numm=0;
for(int i=count2-1;i>0;i--){
    z1=data[i];
    int qq=ceil(log10(z1+1));
    int x=0;
    for(int j=0;j<qq;j++){
       z2=z1%10;
      // if(z2==0){break;}
        arr[j]=z2;
     x++;
            z1=z1/10;
    }
    //cout<<x<<endl;
    //cout<<arr[x-1]<<endl;
    //'''''''''''''''''''''''''''''''''''''''''''''
int count1=0;
    for(int k=0;k<x;k++){
         if(arr[k]==2 || arr[k]==3 || arr[k]==5 || arr[k]==7 ){
            count1++;
         }
        //cout<<count1<<endl;
         if(count1==x){
            cout<<data[i]<<endl;
            numm=data[i];
            break;
         }
    }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    if(numm>0){
        break;
    }
}
 }
        //.................
    }
}

