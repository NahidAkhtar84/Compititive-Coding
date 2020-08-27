#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,l,p;
 int count=0;
 string s;
 cin>>s;
 l=s.length();
 p=(l/2)+1;
 sort(s.begin(),s.end());
 s.erase(0,p-1);
 for(i=0;i<p;i++)
 {count++;
 cout<<s[i];
 if(count!=p)
 {
     cout<<"+";
 }
 }
 return 0;
}
