#include<bits/stdc++.h>
using namespace std;
int main()
 {
     string arr;
     cin >> arr;
     int i, c=0;
     for(i=0; i<arr.length(); i++){
        if(arr[i]==tolower(arr[i])){
            c++;
        }

     }
     if(c==0){
        for(i=0; i<arr.length(); i++){
             arr[i]=tolower(arr[i]);
        }
        cout<< arr <<endl;
    }
     else if(c==1 && arr[0]==tolower(arr[0])){
        arr[0]=toupper(arr[0]);
        for(i=1; i<arr.length(); i++){
             arr[i]=tolower(arr[i]);
        }

        cout<< arr <<endl;
     }
     else
        cout<< arr <<endl;

     return 0;
 }
