#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ot, stn, op, stp;
    cin>>ot>>stn>>op>>stp;
    int x, res;
    x = op*stn;

    if(stp < x){

            if((ot%stn)*op > stp){
                res = ot/stn*stp + stp;
            }
            else{
                res = (ot/stn)*stp + (ot%stn)*op;
            }
    }
    else{
        res = ot*op;
    }

    cout<<res<<endl;
}
