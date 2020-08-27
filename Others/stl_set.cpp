#include<bits/stdc++.h>
using namespace std;
void setdemo()
{
    set<int> s;
    s.insert(3);
    s.insert(7);
    s.insert(1);
    s.insert(-8);
    s.insert(-2);

set<int>::iterator itr;
for(itr= s.begin(); itr != s.end(); itr++)
{
    cout<< *itr<<" ";
}
cout<<endl;

set<int>::iterator it = s.find(1);
if(it == s.end()){
    cout<<"The element is not present in the array"<<endl;
}
else{
    cout<<"present"<<endl;
    cout<< *it<<endl;
}

set<int>::iterator it1 = s.upper_bound(1);
cout<<*it1<<endl;
set<int>::iterator it2 = s.upper_bound(7);
if(it2 == s.end()){
    cout<<"The list is over!"<<endl;
}
}
int main()
{
    setdemo();
}

