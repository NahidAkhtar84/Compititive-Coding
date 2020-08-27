#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        if(n%10 != 0){
            n = n-1;
        }
        else{
            n = n/10;
        }
    }
    cout<<n<<endl;
}
