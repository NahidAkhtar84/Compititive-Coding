#include<iostream>
using namespace std;
int main()
{
    int i,j,total;
    int num,s,t,smd=99,ld=0;
    cin>>t;
    if(t>=1 && t<=100){
        for(i=1;i<=t;i++){
            cin>>num;
            if(num>=1 && num<=20){
                for(j=0;j<num;j++){
                  cin>>s;
                  if(s>ld){
                    ld=s;
                  }
                  if(s<smd){
                    smd=s;
                  }
                }
                cout<<(ld-smd)*2<<endl;

            }
            smd=99;
            ld=0;
        }
    }
    return 0;
}
