#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1[n], a2[n];
        for(int i=0; i<n; i++){
            cin>>a1[i];
        }
        for(int i=0; i<n; i++){
            cin>>a2[i];
        }
        int f=0, one=0, mone=0;
       for(int i=0; i<n; i++){
            if(i ==0 && a1[i] == a2[i]){
                f=0;
            }
            else if(i!=0 && a2[i] == a1[i]){f=0; }
            else if(i!= 0 && a2[i]>0 && one == 1){f=0;}
            else if(i!=0 && a2[i]<0 && mone == 1){f=0;}
            else if(i!=0 && a2[i] ==0 && ((a1[i] == 1 && mone==1)|| (a1[i] ==-1 && one==1))){f=0;}
            else{
                f=1;
                break;
            }
            if(a1[i] == 1)one=1;
            if(a1[i] ==-1)mone=1;
       }
        if(f ==0)cout<<"YES"<<endl;
        if(f == 1)cout<<"NO"<<endl;
    }
}
