#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x;
    int arr1[x];
    for(int i=0;i<x;i++){
        cin >> arr1[i];
    }
    cin>>y;
    int arr2[y];
   for(int i=0;i<y;i++){
        cin >> arr2[i];
    }
int res =0;
    for(int i=1;i<=n;i++){
            int coun =0;
            for(int j=0;j<x;j++){
                if(arr1[j]==i){
                    coun=1;
                }
            }
            if(coun != 1){
                for(int k=0;k<y;k++){
                    if(arr2[k]==i){
                        coun=2;
                    }
                }
            }
          if(coun == 1 || coun == 2)  {
               res = 1;

          }else{
              res =0;

              break;
          }
    }
    if(res ==1){
         cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;

    }

}
