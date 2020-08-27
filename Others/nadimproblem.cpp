#include <bits/stdc++.h>
using namespace std;

inline void doMean(int arr[], int s){
    int i;
    double sum;
   double mean;
   for (i = 0; i < s; ++i) {
      sum += arr[i];
   }
   mean = sum/5.00;
   cout<<"Mean is: "<<mean<<endl;
}
int main(){
int arr[5];
for(int i=0;i<5;i++){
    cin>>arr[i];
}

doMean(arr, 5);

}
