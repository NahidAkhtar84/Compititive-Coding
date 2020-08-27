#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,l,n1;
  int i,j;
  char num[1000];
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>num;
    l=strlen(num);
    if(l==3){
        if( (num[0]=='o' && num[1]=='n' && num[2]=='e') || (num[0]=='o' && num[1]=='n') || (num[0]=='o' && num[2]=='e') || (num[1]=='n' && num[2]=='e')){
        cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    if(l>3){
        cout<<"3"<<endl;
    }

  }
  return 0;

}
