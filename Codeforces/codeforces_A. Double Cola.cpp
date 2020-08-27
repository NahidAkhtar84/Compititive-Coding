#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long i;
    string arr[5];
    arr[0] = "Sheldon";
    arr[1] = "Leonard";
    arr[2] = "Penny";
    arr[3] = "Rajesh";
    arr[4] = "Howard";
    cin>>n;
    i=1;
    while(5*i < n){
        n =n - 5*i;
        i = i*2;
    }
    int res = (n-1)/i;
    cout<<arr[res]<<endl;
}
