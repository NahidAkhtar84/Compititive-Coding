#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = s[i];
        //cout<<arr[i]<<endl;
    }
    for(int i=0; i<m; i++){
    int j=0;
    while(j < n-1){
        if(arr[j] == 'B' && arr[j+1] == 'G'){
            arr[j] = 'G';
            arr[j+1] = 'B';
            j = j+2;
        }
        else if( (arr[j] == 'G' && arr[j+1] == 'B') || (arr[j] == 'G' && arr[j+1] == 'G') || (arr[j] == 'B' && arr[j+1] == 'B')  ){
            j = j +1;
        }
    }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

