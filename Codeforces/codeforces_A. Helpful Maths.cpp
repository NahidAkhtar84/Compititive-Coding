#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp;
    cin>>inp;
    int n;
    if(inp.length()%2 ==0){
        n = inp.length()/2;
    }
    else{
        n = (inp.length()/2)+1;
    }
    char arr[n];
    int j=0;
   for(int i=0;i<inp.length(); i=i+2)
   {
       arr[j] = inp[i];
       j++;
   }
   sort(arr, arr+n);
   cout<<arr[0];
   for(int i=1; i<n; i++){
    cout<<"+"<<arr[i];
   }
    return 0;
}
