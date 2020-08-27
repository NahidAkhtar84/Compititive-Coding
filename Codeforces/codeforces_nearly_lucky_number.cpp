#include<iostream>
using namespace std;
int count1 =0;
int main(){
long long int d;
cin>>d;
int i;
int count2=0;
while(d>0){
    d=d/10;
    count1++;
}

for(i=1;i<=count1;i++){

    d=d/10;
    if(d%10!=4 || d%10!=7){
        cout<<"NO"<<endl;
        break;
    }
       count2++;
       if(count1==count2){
        cout<<"YES"<<endl;
       }

}
return 0;
}

