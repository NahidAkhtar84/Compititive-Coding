#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    for(;;){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        if(N>=6 && N<1000000 && N%2==0){
           //****************************
           //cout<<"Right Input"<<endl;
          //*****************************
    int x=0,arr[1001], counter2=0;
    for(int i=3;i<N;i++){
            int counter=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
               counter++;
               break;
            }
        }
        if(counter<1){
            counter2++;
            arr[x]=i;
            x++;
        }
    }
    //**************************
   // for(int j=0;j<counter2;j++){
        //cout<<arr[j]<<endl;
   // }
    //***************************
    int g=0,h=0;
    for(int k=0;k<counter2;k++){
           // cout<<arr[k]<<endl;

        int sum = arr[counter2-1]+arr[k];
            //cout<<arr[counter2-1]<<endl;
            //cout<<sum<<endl;
        if(sum==N){
            g=arr[counter2-1];
            h=arr[k];
            break;
        }
        if(sum>N){
            counter2=counter2-1;
         k--;
        }
    }
    if(g==0 && h==0){
        printf("Goldbach's conjecture is wrong\n");
    }
    else{
        printf("%d = %d + %d\n",N,h,g);
    }
        }
    }
    return 0;
}
