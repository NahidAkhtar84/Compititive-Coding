#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(i==n){
                cout<<"I hate it"<<endl;
            }
            else{
                cout<<"I hate that ";
            }
        }

        if(i%2==0){
            if(i==n){
                cout<<"I love it"<<endl;
            }
            else{
                cout<<"I love that ";
            }
        }
    }
}
