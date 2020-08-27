//Lowest Common Multiple Finding Code (LCM)
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int a, b;
 cin>>a>>b;
     int lcm=(a*b)/__gcd(a,b);
     cout<<lcm<<endl;
    return 0;
}

