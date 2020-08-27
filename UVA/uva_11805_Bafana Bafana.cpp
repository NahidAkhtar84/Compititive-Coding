#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,x;
    for(i=1;i<=t;i++){
        int n,k,p,j;
        cin>>n>>k>>p;
        x=k;
        for(j=k;j<(k+p);j++){
            x++;
            if(x>n){
                x=1;
            }

        }
        cout<<"Case "<<i<<": "<<x<<endl;
    }
    return 0;
}
