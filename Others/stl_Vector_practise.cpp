#include<bits/stdc++.h>
using namespace std;
bool f(int x, int y){
    return x>y;
}
int main()
{
    vector<int> A;

    for(int i=0; i<5; i++){
        int num;
        cin>>num;
        A.push_back(num);
    }

    //sort
    sort(A.begin(), A.end());
    //print
vector<int>::iterator it3;
for(it3=A.begin(); it3 != A.end(); it3++){
    cout<<*it3<<endl;
}
//search
bool present = binary_search(A.begin(), A.end(), 33);
cout<<present<<endl;

A.push_back(100);
A.push_back(100);
A.push_back(123);
sort(A.begin(), A.end());
//Lower Bound and Upper bound
vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);
//cout<<it<<it2<<end
cout<<"it's value: "<<*it<<"it2's value: "<<*it2<<endl;
cout<<"Number of 100 in the list is: "<<it2-it<<endl;

//sort in reverse order
sort(A.begin(), A.end(), f);

vector<int>::iterator it1;
for(it1=A.begin(); it1 != A.end(); it1++){
    cout<<*it1<<endl;
}

}
