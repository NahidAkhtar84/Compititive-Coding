#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
     int arr1[n];
    for(int i =0; i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
      for(int i =0; i<m;i++){
        cin>>arr2[i];
    }
    int flag2 = 0;
        for(int i =0; i<n;i++){
            if(flag2 != 1) {
           for(int j =0; j<m;j++){
                int sum = arr1[i] + arr2[j];
                int flag =0;
                for(int k =0; k<n;k++) {
                    if(sum == arr1[k]){
                        flag =1;
                        break;
                    }

                }
               for(int k =0; k<m;k++) {
                    if(sum == arr2[k]){
                        flag =1;
                        break;
                    }

                }

                if(flag != 1){
                    flag2 = 1;
                    cout<<arr1[i]<<" "<<arr2[j]<<endl;
                    break;
                }

     }
 }
}
}
