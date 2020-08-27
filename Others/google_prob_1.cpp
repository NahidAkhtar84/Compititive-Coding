#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
         int arr[n][n];
        int r=0, c=0, rr=0, rc=0, sum=0;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                cin>>arr[j][k];
                if(j == k){
                    sum = sum+arr[j][k];
                }
            }
        }

         for(int j=0; j<n; j++){
            for(int k=0; k<n-1; k++){
                if(arr[j][k] == arr[j][k+1]) r++;
            }
            if(r>0){
                r++;
                if(r>rr){
                    rr=r;
                }
            }
            r=0;
        }

            for(int k=0; k<n; k++){
            for(int j=0; j<n-1; j++){
                if(arr[j][k] == arr[j+1][k]) c++;
            }
            if(c>0){
                c++;
                if(c>rc){
                    rc=c;
                }
            }
            c=0;
        }

        cout<<"Case #"<<i+1<<":"<<" "<<sum<<" "<<rr<<" "<<rc<<endl;
    }
}
