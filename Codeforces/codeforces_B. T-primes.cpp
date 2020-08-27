#include<bits/stdc++.h>
using namespace std;

bool chkPrime(long long int var){
    if(var < 2){
        return false;
    }
    else if(var == 2){
        return true;
    }
    else if(var%2 ==0){
            return false;
            }
    for(int k=3; k<=sqrt(var); k=k+2){
        if(var%k == 0){
            return false;
        }
    }

    return true;
}

bool squareRootChk(long long int var){
    long double sr = sqrt(var);
    //cout<<sr<<endl;
    if((sr - floor(sr)) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n, i;
    cin>>n;
    long long int arr[n];
    long long int valb;
    for(i=0; i<n; i++){
        cin>>arr[i];
        if(squareRootChk(arr[i]) == 1){
            valb = sqrt(arr[i]);
        }
        else{
            valb =0;
            cout<<"NO"<<endl;
        }
       if(valb != 0){
            if(chkPrime(valb) ==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }

    }
}
