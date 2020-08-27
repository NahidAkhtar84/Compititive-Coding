#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,num=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>n;
                if(n==1){
                a=i;
                b=j;
                        }
        }
    }

    //cout << a<<" " <<b;
    if(a<3){
    for(int k=a;k<3;k++){
        num++;
    }
    }
      if(a>3){
    for(int k=a;k>3;k--){
        num++;
    }
    }
    if(b<3){
    for(int l=b;l<3;l++){
        num++;
    }
    }

      if(b>3){
    for(int l=b;l>3;l--){
        num++;
    }
    }
    cout<<num<<endl;
    return 0;
}
