
#include<iostream>
using namespace std;
int main()
{
    long int a,b,result;
    while(cin>>a>>b){

    if(a>=b){
        result = a-b;
    }
    else if(b>a){
        result=b-a;
    }
    cout<<result<<endl;
    }
    return 0;
}
