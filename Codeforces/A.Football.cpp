#include<bits/stdc++.h>
using namespace std;
int main()
      {
int l,flag=0, count=0,coun=0;
int i;
 string s;
 cin>>s;
 l=s.length();
 for(int i=0;i<l;i++)
  {
 if(s[i]=='0')
      {
          count++;
           coun=0;
      }
    else if(s[i]=='1')
      {
          coun++;
          count=0;
       }
        if(count==7||coun==7)
  {
     flag=1;
     break;
  }
}
if(flag==1)
{
    cout<< "YES";
}

else
  {
 cout<< "NO";
  }
return 0;
}
