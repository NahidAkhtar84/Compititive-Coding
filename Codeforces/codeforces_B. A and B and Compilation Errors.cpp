//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n], arr2[n-1], arr3[n-2];
    vector <long long> s1, s2, s3;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s1.push_back(arr[i]);
    }
    for(int i=0; i<n-1; i++){
        cin>>arr2[i];
        s2.push_back(arr2[i]);
    }
    for(int i=0; i<n-2; i++){
        cin>>arr3[i];
        s3.push_back(arr3[i]);
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());
    vector<long long>::iterator it1, it2, it3;
    long long res1=0, res2=0;
    for(it1 = s1.begin(), it2 =s2.begin(); it1 != s1.end(); it1++, it2++)
    {
        if(*it1 != *it2){
            res1 = *it1;
            break;
        }
    }

    for(it2 = s2.begin(), it3 =s3.begin(); it2 != s2.end(); it2++, it3++)
    {
        if(*it2 != *it3){
            res2 = *it2;
            break;
        }
    }

    cout<<res1<<endl;
    cout<<res2<<endl;

}
