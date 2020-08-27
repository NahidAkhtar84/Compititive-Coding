#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int inf=1,i=1;
    int resf=0;
    while(inf == 1){
        l = l*3;
        b = b*2;
        if(l>b){
            resf=i;
            inf=0;
        }else{
                 i++;
        }
    }
    cout<<resf<<endl;

}
