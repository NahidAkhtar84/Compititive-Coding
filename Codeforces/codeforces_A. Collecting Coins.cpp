#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, r;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>r;
        int maxy=0;
        if(a >= b && a>= c){
            maxy = (a-b) + (a -c);
        }
        else if(b>=a && b>=c){
            maxy = (b - a) + (b - c);
        }
        else{
            maxy = (c - a) + (c - b);
        }

        if(maxy == r){
            cout<<"YES"<<endl;
        }
        else if(maxy < r){
            if((r-maxy)%3 ==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
