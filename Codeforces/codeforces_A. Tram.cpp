#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n], b[n];
   for(int i=0; i<n; i++)
   {
       cin>>a[i]>>b[i];
   }
   int res =b[0];
   for(int i=1; i<n; i++)
   {
       if((b[i]+(b[i-1] - a[i-1])-a[i]) >res){
        res = b[i]+(b[i-1] - a[i-1])-a[i];
       }
       b[i] = b[i]+(b[i-1] - a[i-1]);
   }
   cout<<res<<endl;
}
