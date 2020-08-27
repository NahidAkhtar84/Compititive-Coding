#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    if(n>=0 && n<=180){
        for(int i=0;i<n;i++){
        cin>>a;
        if(a>=0 && a<=180){

            if(360%(180-a)==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }
    }

}
return 0;
}
