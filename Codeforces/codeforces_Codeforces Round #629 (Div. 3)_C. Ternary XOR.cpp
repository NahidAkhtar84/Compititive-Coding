#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        string num, num1="", num2="";
        cin>>n>>num;
        int f=1;
        for(int i=0; i<n; i++){
            if(f ==1){
                if(num[i] == '2'){
                    num1=num1+'1';
                    num2=num2+'1';
                }
                else if(num[i] == '0'){
                    num1=num1+'0';
                    num2=num2+'0';
                }
                else
                {
                    num1=num1+'1';
                    num2=num2+'0';
                    f=0;
                }
            }
            else{
                num1=num1+'0';
                num2=num2+num[i];
            }
        }

        cout<<num1<<endl;
        cout<<num2<<endl;
    }
}
