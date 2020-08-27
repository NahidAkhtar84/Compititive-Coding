#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin>>n>>x;
    long long arr[n];
    for(long long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <long long> v(20000005);
    long long ctn=0;
    for(long long i=0; i<n; i++)
    {
        for(long long j=1; j<=arr[i]; j++)
        {
            v[ctn]=j;
            ctn++;
        }
    }
    //''''''''''''''
    long long res =0;
     long long b[(2 * ctn)];
    // Copy a[] to b[] two times
    for (long long i = 0; i < ctn; i++)
        b[i] = b[ctn + i] = v[i];
    // print from ind-th index to (n+i)th index.
    for (long long i = 0; i <ctn; i++)
        {
        long long sum =0;
        for(int j=i; j< i+x; j++){
            sum= sum+b[j];
        }
        if(sum> res){
        res = sum;
    }
        }
    cout<<res<<endl;
}
