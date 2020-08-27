#include<bits/stdc++.h>
using namespace std;

std::string printBinary(int num, int bits) {
    std::vector<char> digits(bits);
    for (int i = 0; i < bits; ++i) {
        digits.push_back(num % 2 + '0');
        num >>= 1;
    }
    return std::string(digits.rbegin(), digits.rend());
}


int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0; i<=m; i++){
        cin>>arr[i];
    }
    string arr2[m+1];
    for(int i=0; i<=m; i++){
        arr2[i] = printBinary(arr[i], 32);
        cout<<arr2[i]<<endl;
    }
    int cnt1=0;
   for(int i=0; i<m; i++){
        int cnt=0;
    for(int j=0; j<32; j++){
        if(arr2[i][j] != arr2[m][j]){
            cnt++;
        }
    }
    if(cnt<=k){
        cnt1++;
    }
   }
cout<<cnt1<<endl;
}
