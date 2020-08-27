#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1, co=0;
    int r = c;
    while(n>=r){
        n = n-r;
        c++;
        r = r+c;
        co++;
    }
    cout<<co<<endl;
}
