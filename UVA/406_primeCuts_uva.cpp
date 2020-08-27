//Not Efficent
//Time exceeded,,,,,,check test10

#include<iostream>
using namespace std;
int main(){

    while(1){
    int N,c,x=1;
    cin>>N>>c;
    int prn,arr[1000];

    arr[0]=1;
    for(int i=2;i<=N;i++){
            int counter1=0;
            int m=i/2;
        for(int j=1;j*j<=m;j++){
        if(i%j==0){
            counter1++;
        }
        }
        if(counter1<=1){
            arr[x]=i;
            x++;
        }
    }

    if(x%2!=0){
        cout<<N<<" "<<c<<":"<<" ";
        int x1=(x/2);
        int d1=((2*c)-1)/2;
        if(d1<=x1) {
        for(int l=x1-d1;l<=x1+d1;l++){
            cout<<arr[l]<<" ";
        }
        }
        else{
            d1=x1;
            for(int l=x1-d1;l<=x1+d1;l++){
            cout<<arr[l]<<" ";
        }
        }

    }
    if(x%2==0){
    cout<<N<<" "<<c<<":"<<" ";
        int x2=(x/2);
        int d2=(2*c)/2;
        if(d2<=x2){
        for(int l=x2-d2;l<=x2+(d2-1);l++){
            cout<<arr[l]<<" ";
        }
        }
        else{
            d2=x2;
                    for(int l=x2-d2;l<=x2+(d2-1);l++){
            cout<<arr[l]<<" ";
        }
        }
    }
cout<<endl;
    }
    return 0;
}
