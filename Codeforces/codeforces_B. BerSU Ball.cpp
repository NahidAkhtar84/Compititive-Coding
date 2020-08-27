#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    int c=0, co=0;
    for(int i=0;i<n;i++){
        for(int j=c;j<m;j++){
            if(arr1[i] == arr2[j] || arr1[i] == (arr2[j]-1) || arr1[i] == (arr2[j]+1)){
                co++;
                c=j+1;
                break;
            }
        }
    }
    cout<<co<<endl;
}
