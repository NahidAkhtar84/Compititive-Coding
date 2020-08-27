#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], b[n], c[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            c[i] = a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
      sort(c, c+n);
      bool f = true;
      int cnt =0;
      for(int i=0; i<n; i++)
      {
          if(a[i] == c[i]){
            continue;
          }
          else{
            f = false;
            break;
          }
      }
      if(f){
        cout<<"Yes"<<endl;
      }
      else{
        int c1=0, c2=0;
        for(int i=0; i<n; i++)
        {
            if(b[i] == 0)c1++;
            if(b[i] == 1)c2++;
        }
        if(c1>0 && c2>0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
      }
    }
}
