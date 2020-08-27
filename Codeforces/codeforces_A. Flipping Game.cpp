#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int one=0, zero=0, uzero = -1 ;
    cin>>n;
    int m[n];
    for(int i=0; i<n; i++){
        cin>>m[i];
        if(m[i] ==1){
            one++;
            if(zero>0){
                zero--;
            }
        }
            else{
                zero++;
                if(zero>uzero){
                    uzero = zero;
                }
            }
    }
    cout<<one+uzero<<endl;
}
