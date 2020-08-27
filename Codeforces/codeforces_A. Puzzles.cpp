#include <bits/stdc++.h>
using namespace std;

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2*i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j+1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j/2] = a[j];
            j = 2*j;
        }
    }
    a[j/2] = temp;
    return;
}
void heapsort(int *a, int n)
{
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heapify(a, 1, i - 1);
    }
}
void build_maxheap(int *a, int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a, i, n);
    }
}
int main()
{
    int n, i, x,m;
     cin>>m;
    //cout<<"Enter no of elements of array\n";
    cin>>n;
    int a[51];
    for (i = 1; i <= n; i++)
    {
        //cout<<"Enter element"<<(i)<<endl;
        cin>>a[i];
    }
    build_maxheap(a,n);
    heapsort(a, n);
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
int i1=0,least=a[n]-a[0];
cout<<a[n]<<" "<<a[0]<<" "<<least<<endl;
for(;;){
    cout<<"t1 "<<a[i1+m]<<endl;
     cout<<"t2 "<<a[n]<<endl;
        if(a[i1+m]==a[n] ){

        break;
    }

    if((a[i1+m] - a[i1]) < least){
         //cout<<a[i1+m]<<a[i1] <<endl;
         //cout<<"output m :"<<m<<endl;
         //cout<<"output is"<<a[i1+m]<<endl;
        least=a[i1+m] - a[i1];
    }

    i1++;
}
cout<<least<<endl;
//'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    return 0;
}
