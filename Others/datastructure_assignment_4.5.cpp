#include<iostream>
using namespace std;
int main(){
int a=3,b=2,i,j;
int arr[a][b];

for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){
        cin>>arr[i][j];
    }
}

for(j=1;j<=b;j++){
        int sum=0,ave=0;
    for(i=1;i<=a;i++){
       sum=sum+arr[i][j];
    }
ave=sum/3;
cout<<j<<" is : "<<ave<<endl;
}
return 0;
}
