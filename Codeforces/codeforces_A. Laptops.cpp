#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int, int> arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
        {
            if(arr[i].first < arr[i+1].first && arr[i].second > arr[i+1].second){
                printf("Happy Alex\n");
                return 0;
            }
        }
    printf("Poor Alex\n");
    return 0;

}
