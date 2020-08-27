#include<bits/stdc++.h>
using namespace std;
int main()
{ int i,l,count=0;

    string n;
    cin>>n;
    int a=atoi(n.c_str());
    l=n.length();
    for(i=0;i<l;i++)

    {
        if(n[i]=='4'||n[i]=='7')
        {
            count++;
        }
    }
     if(count==l)
            {
                cout<< "YES";
            }
   else if(a%4==0||a%7==0||a%47==0)
    {
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}

