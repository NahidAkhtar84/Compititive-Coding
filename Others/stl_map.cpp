#include<bits/stdc++.h>
using namespace std;
void mapPrac(){
map<char, int>mp;
string str ="whatisthemeaningoflife";
for(int i=0; i< str.length(); i++){
    mp[str[i]]++;
}
cout<<mp['n']<<endl;
}
int main()
{
    mapPrac();
}
