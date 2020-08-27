
#include<iostream>
using namespace std;
int main(){
    int n,m,s=0;
    float r;
    int q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m>=1 && m<=4){
            s=s+m;
        }
    }
    r=s/4.00;
    q=s/4;
    if(r==q){
        cout<<q<<endl;
    }
    else if(r>q){
        cout<<q+1<<endl;
    }
    return 0;
}
