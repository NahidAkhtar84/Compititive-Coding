#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
long long takleya(const vector<int>& val)
{
    int n = val.size();

    int mxind1 = -1;
    for(int i=0; i<n; ++i){
        if(mxind1 == -1 || (val[i] > val[mxind1])){
            mxind1 = i;
        }
    }

    int mxind2 = -1;
    for(int j=0; j<n; ++j){
        if((j != mxind1) && (mxind2 == -1 || (val[j] > val[mxind2]))){
            mxind2 = j;
        }
    }

    return ((long long) (val[mxind1]))* val[mxind2];
}
int main()
{

    long long n;
    cin>>n;
    vector<int> val(n);
    for(int i=0; i<n; ++i)
    {
        cin>>val[i];
    }
    long long res = takleya(val);
    cout<<res<<endl;
}
