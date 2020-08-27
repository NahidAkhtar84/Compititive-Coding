#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, et;
    cin>>n>>k;
    et = 240 - k;
    int stt;
    for(int i =1; i<=n; i++)
    {
        if(et>=0){
            et = et - i*5;
            if(et >=0){
                stt =i;
            }
            else{
                stt = i-1;
            }
        }

    }
        cout<<stt<<endl;
}
