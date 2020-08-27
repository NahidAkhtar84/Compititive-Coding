#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, b,res1, res2, res3;
    cin>>r>>b;
    res1 = min(r, b);
    res2 = r - b;
    if(res2 < 0){
        res2 = res2 * (-1);
    }
    res3 = res2/2;
    cout<<res1<<" "<<res3<<endl;
}
