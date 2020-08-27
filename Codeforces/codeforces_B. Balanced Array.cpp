#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int arr[n];
        if(n<4 || n%2==1 || (n/2)%2==1){
            cout<<"NO"<<endl;
        }
        else{
            int val =2;
            for(int i=0; i<n/2; i++)
            {
                arr[i]=val;
                val=val+2;
            }
            int f=-1, palti=0;
            for(int i= n/2; i<n; i++){
                f++;
                if(i== n-1){
                    arr[i] = arr[f]+palti;
                }
                else{
                    arr[i]=arr[f]-1;
                    palti++;
                }

            }
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
