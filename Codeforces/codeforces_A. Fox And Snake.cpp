#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if (n%2 == 1){
        int count1 = 0;
        for(int i =1;i<=n;i++){
            if(i %2 == 0){
                count1++;
            }
            for(int j=1;j<=m;j++){
                if(i%2 == 1){
                    cout<<'#';
                }
                if(i%2 == 0){
                        if(j == m && count1%2 == 1){
                            cout<<'#';
                        }
                        else if(j == 1 && count1%2 == 0){
                            cout<<'#';
                        }
                        else{
                            cout<<'.';
                        }
                }
            }
            cout<<endl;
        }
    }
}
