#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a=0, b=0, c=0;
    cin>>n;
    int rootarr[n], ar[n], br[n], cr[n];
    for(int i=1;i<=n;i++){
        cin>>rootarr[i];
        if(rootarr[i] == 1){
            ar[a]=i;
            a++;
        }
        if(rootarr[i] == 2){
            br[b]=i;
            b++;
        }
        if(rootarr[i] == 3){
            cr[c]=i;
            c++;
        }
    }
    int num = min(min(a,b), c);
    cout<<num<<endl;
    if(num != 0){
        for(int i=0;i<num;i++){
            cout<<ar[i]<<" "<<br[i]<<" "<<cr[i]<<endl;
        }
    }

}
