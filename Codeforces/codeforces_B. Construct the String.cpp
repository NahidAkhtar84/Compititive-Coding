//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b;
        cin>>n>>a>>b;
        string s=" ";
        int m=0, f=0;
        while(m <n){
            if(f ==0){
            for(int i=0; i<b; i++){
                s= s + char(97+i);
                m++;
                if(m == n){
                    f =1;
                    break;
                }

            }
                }
            if(f== 1){
                break;
            }
        }
        cout<<s<<endl;
    }
}
