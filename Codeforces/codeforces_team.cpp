#include<iostream>
using namespace std;
int main()
{
    int n,c1,c2,c3;
    cin>>n;
    if(n>=1 && n<=1000){
            int count1=0;
        for(int i=0;i<n;i++)
        {
          cin>>c1>>c2>>c3;
          if(c1>=0 && c1<=1 && c2>=0 && c2<=1 && c3>=0 && c3<=1) {
            if(c1+c2+c3>=2){
                count1++;
            }
          }
        }
    cout<<count1<<endl;

    }

    return 0;
}
