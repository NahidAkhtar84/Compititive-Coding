#include <iostream>
using namespace std;
int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int sum = 0;
    if(d1+d2>=d3)
    {
        if(d1<=d2){
        if(d1+d3>=d2){
        sum=d1+d3+d2;
        }
        else {
        sum=(2*d1)+(2*d3);
        }
        }
        else{
            if(d2+d3>=d1){
                sum =d2+d3+d1;
            }
            else{
                sum=(2*d2)+(2*d3);
            }
        }
    }
    else
    {
        sum=(2*d1)+(2*d2);
    }
    cout<<sum<<endl;
    return 0;
}
