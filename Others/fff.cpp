#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()

{
    int t;
    for(int x=0;x<t;x++){
    int n, r,count2=0,i;

    bool flag = true;

    cin >> n;

    for( i = 1; i <= n; i++){
            flag = true;
        for(int j = 2; j <= i - 1; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
count2++;
    }
        //=======================
int z1,z2,arr[20],numm=0;
for(int j=count2-1;j>0;j--){
    z1=i;
    int qq=ceil(log10(z1+1));
    int x=0;
    for(int l=0;l<qq;l++){
       z2=z1%10;
      // if(z2==0){break;}
        arr[l]=z2;
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
            cout<<i<<endl;
            numm=i;
            break;
         }
    }
    //;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    if(numm>0){
        break;
    }
}
        //============================

    }
}


