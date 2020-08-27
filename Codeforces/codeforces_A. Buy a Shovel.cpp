#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, k;
    cin>>r>>k;
    int c=1, res;
    for(;;){
        if((r*c)%10 ==0 || r*c - ((r*c)/10)*10 == k){
            res = c;
            break;
        }else{
            c++;
        }
    }
    cout<<res<<endl;
}
