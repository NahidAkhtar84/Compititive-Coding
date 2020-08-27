
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char n[120]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char z[1],m[120];
    cin>>z;
    cin>>m;
    if(z[0]=='R'){
    for(int i=0;i<strlen(m);i++){
        for(int j=0;j<strlen(n);j++){
            if(m[i]==n[j]){
                cout<<n[j-1];
                break;
            }
        }
    }
    cout<<endl;
    }
    if(z[0]=='L'){
        for(int i=0;i<strlen(m);i++){
        for(int j=0;j<strlen(n);j++){
            if(m[i]==n[j]){
                cout<<n[j+1];
                break;
            }
        }
    }
    cout<<endl;
    }

    return 0;
}
