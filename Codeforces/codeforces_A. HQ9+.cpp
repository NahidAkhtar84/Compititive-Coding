#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l,count1=0,flag=0;
   l=s.length();
   for(i=0;i<l;i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
        cout<<"YES"<<endl;
   flag=1;
        break;
    }
    count1++;
   }

   if(count1==l && flag==0){
    cout<<"NO"<<endl;
   }

}
