#include<bits/stdc++.h>
using namespace std;
int main()
{
    char inivalue ;
    cin>>inivalue;
    char arr[1001];
    int i =0;
    while(inivalue == '{'){
        char midval;
        cin>>midval;
    if(midval == '}'){
        break;
    }
    if(midval >= 97 && midval <=122){
        arr[i]=midval;
    i++;
    }
    }
sort(arr, arr+i);
    int n=0;
    for(int j=0;j<i;j++){
            n++;
            if(arr[j] == arr[j+1]){
                n--;
            }
        }
    cout<<n<<endl;
}
