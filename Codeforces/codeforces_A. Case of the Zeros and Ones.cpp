#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char arr[n];
    int o=0, z=0, res;
    for(int i=0; i<n; i++)
    {
        arr[i] = s[i];
        if(arr[i] == '1'){
            o++;
        }
        if(arr[i] == '0')
        {
            z++;
        }
    }
    res = z - o;
    if(res <0){
        res = res * (-1);
    }
    cout<<res<<endl;

}
