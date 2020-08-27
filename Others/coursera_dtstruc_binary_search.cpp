#include<bits/stdc++.h>
using namespace std;

long long binarySearch(long long arr[], int l, int r, long long x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int k;
    cin>>k;
    long long brr[k];
    for(int i =0; i<k; i++)
    {
        cin>>brr[i];
        long long result = binarySearch(arr, 0, n - 1, brr[i]);
        cout<<result<<endl;
    }
}
