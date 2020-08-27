#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long t1,t2=0;
    t1=n;
for(; ;){
    t1=t1/10;
    t2++;
    if(t1==0){
        break;
    }
}
int i;
//cout<<t2<<endl;
int count1=0;
for(i=0;i<t2;i++){
    if(n%10==4 || n%10==7){
        count1++;
    }
    n=n/10;
}

//cout<<count1<<endl;
if(count1==7 || count1==4){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
