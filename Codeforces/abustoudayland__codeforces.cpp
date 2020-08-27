#include<iostream>
using namespace std;
int main()
{
    int n,v=0;
    string c,b[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c[0]=='O' && c[1]=='O' && v==0)
        {
            c[0]='+';
            c[1]='+';
            v=1;
        }
        else if(c[3]=='O' && c[4]=='O' && v==0)
        {
            c[3]='+';
            c[4]='+';
            v=1;
        }
        b[i]=c;
    }

        if(v==1){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}
