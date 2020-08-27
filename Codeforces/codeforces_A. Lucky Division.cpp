#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,entry=0,i,test1,count1=0;
    cin>>number;
    int lengtho=log10(number) + 1;

    if(number%47==0 || number%4==0 || number%7==0){
        cout<<"YES"<<endl;
        entry=1;
    }

    if(entry==0){
        for(i=0;i<lengtho;i++){
            test1=number%10;
            if(test1==4 || test1==7){
            count1++;
        }
        number=number/10;
        }
      if(count1==lengtho){
        cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

    }

}
