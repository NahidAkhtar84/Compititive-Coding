#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, res=0, rem=0;
    cin>>n;
    res = res + n/10;
    rem = n%10;
    if(rem>0){
        res = res + rem/5;
        rem = rem%5;
        if(rem>0){
            res = res+rem;
        }
    }
    cout<<res<<endl;
}
