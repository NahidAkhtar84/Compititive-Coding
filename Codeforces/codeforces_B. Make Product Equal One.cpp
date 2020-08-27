#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int sum2 =0;
    int neg_counter =0;
      for(int i =0;i<n;i++){
            int sum1 =0;
        if(arr[i]>0 && arr[i] != 1){
            sum1 = arr[i] -1;
            sum2 = sum2 + sum1;
        }
      else if(arr[i]<=0 && arr[i] != -1){

            sum1 = arr[i] +1;
            if(arr[i] !=0){
                neg_counter++;
                sum2 = sum2 + (sum1 * -1);
            }
            if(arr[i] == 0){
                sum2 = sum2 + sum1;
            }

        }
      else if ( arr[i] == 1 || arr[i] == -1){
        sum2++;
      }
    }

    if(neg_counter%2 == 0){
        cout<<sum2<<endl;
    }
    else{
        cout<<sum2+2<<endl;
    }

}
