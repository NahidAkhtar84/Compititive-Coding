#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int evn=0, odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0){
                evn++;
            }
            else{
                odd++;
            }
        }
        int tp;
        if(n%2 ==1){
            tp = (n/2)+1;
        }
        else{
            tp = n/2;
        }
        if( odd != (n/2) && evn != tp){
            cout<<-1<<endl;
        }
        else{
            int o=0, e=0;
            for(int i=0; i<n; i++)
            {
                if( i%2 != arr[i]%2){
                    if(i%2 == 0){
                        e++;
                    }
                    else{
                        o++;
                    }
                }
            }
            if( e != o){
                cout<<-1<<endl;
            }
            else{
                cout<<e<<endl;
            }
        }
    }
}
