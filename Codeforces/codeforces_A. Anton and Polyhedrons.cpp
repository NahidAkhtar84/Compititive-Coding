#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, res = 0;
    int i;
    string s;
    cin>>n;
    map <string, long int> mp;
    map<string, long int> :: iterator it;
    for(i=0;i<n;i++){
        cin>>s;
        if(mp.find(s) != mp.end()){
            mp[s]++;
        }
        else{
            mp[s] = 1;
        }
    }
    for(it = mp.begin(); it != mp.end(); it++){

        if(it ->first == "Tetrahedron"){
            res = res + (4*it ->second);
        }
        if(it ->first == "Cube"){
            res = res + (6*it ->second);
        }
        if(it ->first == "Octahedron"){
            res = res + (8*it ->second);
        }
        if(it ->first == "Dodecahedron"){
            res = res + (12*it ->second);
        }
        if(it ->first == "Icosahedron"){
            res = res + (20*it ->second);
        }
    }
    cout<<res<<endl;
}
