#include<iostream>
using namespace std;
int main()
{
    int n,k,score[101];
    cin>>n>>k;
    if(n>=k){
            int count1=0;
            for(int i=0;i<n;i++){
                cin>>score[i];
            }
    for(int i=0;i<n;i++){
    if(score[i]>0 && score[i]>=score[i+1] ){
            if(score[i]>k){
                count1++;
            }
    }
        }
        cout<<count1<<endl;

    }
return 0;
}
