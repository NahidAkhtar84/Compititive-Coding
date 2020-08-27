//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], arr2[n*n];
    int c1=1, c2=0, f=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[j]=c1;
            c1++;
        }
        f++;
        if(f%2==1){
            reverse(arr, arr+n);
        }
        for(int j=0; j<n; j++)
        {
            arr2[c2]=arr[j];
            c2++;
        }

    }
    for(int i=0; i<n; i++){
        int c3=i;
        for(int j=0; j<n; j++){
            cout<<arr2[c3]<<" ";
            c3=c3+n;
        }
    cout<<endl;
    }

}
