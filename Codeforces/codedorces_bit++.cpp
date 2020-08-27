#include<iostream>
using namespace std;
int main()
{
    int x=0,n;
    string test;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>test;
        if(test=="X++" || test=="++X"){
            x++;
        }
        else if(test=="X--" || test=="--X"){
            x--;
        }
    }
    cout<<x<<endl;
return 0;
}
