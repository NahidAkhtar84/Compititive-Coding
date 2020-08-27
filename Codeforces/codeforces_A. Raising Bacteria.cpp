#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int co=0;
    while(n/2 !=0){
        if(n%2 == 1){
            co++;
        }
        n = n/2;
    }
    cout<<co+1<<endl;

}
