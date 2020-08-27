#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n=1;
    cin>>k;
    string str = "codeforces";
    vector<int> v(10, 1);
    int p =0;
    while(n< k){
        v[p]++;
        n=1;
        for(int i=0; i<10; i++){
            n = n* v[i];
        }
       p++;
       if(p == 10){
        p=0;
       }
    }
    for(int i=0; i<10; i++)
    {
        while(v[i]--){
            cout<<str[i];
        }
    }
}
