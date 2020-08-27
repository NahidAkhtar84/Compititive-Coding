#include<iostream>
//go to test55
using namespace std;
int main()
{
    int r,n,r1;
    for(int i=0;i<1002;i++)
    {
        cin>>r>>n;
        int count1=0;
        if(r==0 && n==0){
            break;
        }
        r1=r-n;
        while(1){
            if(r1>0){
            count1++;
            }
            else if(r1<=0){
                break;
            }
            r1=r1-n;

        }
        if(count1>=0 && count1<=26){
            cout<<"Case "<<i+1<<": "<<count1<<endl;
        }
        if(count1>26){
            cout<<"Case "<<i+1<<": "<<"impossible"<<endl;
        }

    }
    return 0;
}
