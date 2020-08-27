// accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[3];
    cin>>n;
    for(int i =0;i<3;i++)
    {
        cin>>a[i];
    }
  sort(a,a+3);
  int res =0;
  int i,j,k;
  int hd = n/a[0];
  for(i=hd; i>=0; i--)
  {
      for(j =0;j<=n;j++){
        k = abs((n - (i*a[0] + j*a[1]))/a[2]);
        if((i*a[0] + j*a[1] + k*a[2]) == n){
            if((i+j+k) > res){
                res = i+j+k;
            }
        }
      }
  }
  cout<<res<<endl;
}
