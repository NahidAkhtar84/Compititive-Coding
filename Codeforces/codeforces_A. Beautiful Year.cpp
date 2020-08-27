#include<bits/stdc++.h>
using namespace std;
int main()
{
     int year1;
    cin>>year1;
    int i;
    int a,b,c,d;
    while(true)
    {
        year1++;
         a=year1/1000;
        b=year1/100;
        b=b%10;
        c=year1/10;
        c=c%10;
        d=year1%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }

     }
cout<<year1<<endl;
  return 0;
}

// couldn't figure out why this below one showing error on test no 7

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year1;
    cin>>year1;
    if(year1>=1000 && year1<8976){
    int i,j;
    int res1;
char test[4];
int polo,got=0;
    for(i=year1+1;i<=8976;i++)
    {
        polo=i;
        for(j=0;j<4;j++){
            test[j]=polo%10;
            polo=polo/10;
        }
      if(test[0]!=test[1] && test[0]!=test[2] && test[0]!=test[3] && test[1]!=test[2] && test[1]!=test[3] && test[2]!=test[3]) {
        cout<<i<<endl;
        got=1;
        break;
      }
    }
     if(got==0){
        cout<<year1<<endl;
    }
    }

    return 0;
}
*/
