//Not Accepted look in for python
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int W, n;
    cin>>W>>n;
    int wt[n];
    for(int i=0; i<n; i++)
    {
        cin>>wt[i];
    }
    int val[n+1][W+1];
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j< W+1; j++)
        {
            val[i][j] =0;
        }
    }
    int tmp=0;
    for(int i=1; i< n+1; i++)
    {
        int wi = wt[i-1];
        int vi = wt[i-1];
        for(int j=1; j<W+1; j++)
        {
            val[j][i] = val[j][i-1];
            if(wi <= j){
                tmp = val[j-wi][i-1] + vi;
                if(val[j][i] < tmp){
                    val[j][i] = tmp;
                }
            }
        }
    }
    cout<<val[W][n]<<endl;
}
