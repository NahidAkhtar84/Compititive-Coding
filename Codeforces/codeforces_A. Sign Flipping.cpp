#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, n, a;
   cin>>t;
   while(t--){
    cin>>n;
    while(n--){cin>>a, (n&1)? a= abs(a): a = - abs(a), cout<<a<<" "; }
   }
   return 0;
}
