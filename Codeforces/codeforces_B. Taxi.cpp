#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, o=0, t=0, th=0, f=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 4){
            f++;
        }
        if(arr[i] == 3){
            th++;
        }
        if(arr[i] == 2){
            t++;
        }
        if(arr[i] == 1){
            o++;
        }
    }
    int total = f + th + int(t/2);
    o = o - th;
    if(t%2 == 1){
        o = o - 2;
        total++;
    }
    if(o > 0){
        total = total + (o+3)/4;
    }
    cout<<total<<endl;
    return 0;
}
