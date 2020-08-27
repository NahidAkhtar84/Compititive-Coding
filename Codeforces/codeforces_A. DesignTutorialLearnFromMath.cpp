#include<bits/stdc++.h>
using namespace std;

int n,h;
bool checkComposite(int v){
    bool status = false;
    for(int j = 2;j<= sqrt(v)+1;j++){
        if(v%j == 0){
            status = true;
        }
    }
    return status;
}


int main()
{
    int res1, res2;
    cin>>n;
    if(n>=12 ){
        for(int i = 4; i<= n/2; i++){
            h = n-i;
            if(checkComposite(i) == 1 && checkComposite(h) == 1){
                res1 = i;
                res2 = h;
                break;
            }
        }
    }
    cout<<res1<<" "<<res2<<endl;
}
