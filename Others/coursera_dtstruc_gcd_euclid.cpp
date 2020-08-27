#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n1, n2,tmp=0;
    int flag =0;
    cin>>n1>>n2;
        if(n1<n2){
        tmp = n1;
        n1=n2;
        n2=tmp;
    }
    long long r1=0, res=0;
    while(true){
        r1 = n1%n2;
        if(r1==0){
            //cout<<"We have found our GCD and it is:\n";
            res = n2;
            break;
        }
        else if(n1/n2 ==0 && r1>0){
            //cout<<"There is no common divisor of these 2 numbers\n";
            flag=1;
            break;
        }
        else{
            n1 = n2;
            n2 = r1;
        }
    }
    if(flag == 0){
    cout<<res<<endl;
    }
    else{
        cout<<1<<endl;
    }
}
