#include<bits/stdc++.h>
using namespace std;
typedef long double ll;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll h, c, t, x, y;
        cin>>h>>c>>t;
        if(h+c >= 2*t)
        {
            cout<<2<<endl;
        }
        else{
                //We Calculated the n here. it is half numbrer of elements computed from half segment(t-c)
                //Divided by the difference of (t - average of (h+c))
            int n =(t-c)/(2*t -(h+c));
            // here we multiplied the (h+c) pairs with n and minus the last element from that
            // and found the average of the sum of those numbers through (2*n-1)
            // then we calculated the error(difference of avg and t)
            x =(((h+c)*n -c)/(2*n-1))-t;
            // here we multiplied the (h+c) pairs with n and plus the first element with that
            // and found the average of the sum of those numbers through (2*n+1)
            // then we calculated the error(difference of avg and t)
            y = (((h+c)*n+h)/(2*n+1))-t;

            if(fabs(x) > fabs(y)){
                cout<<2*n+1<<endl;
            }
            else{
                cout<<2*n-1<<endl;
            }
    }
    }
}
