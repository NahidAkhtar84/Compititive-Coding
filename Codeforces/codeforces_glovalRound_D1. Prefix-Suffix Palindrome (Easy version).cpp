#include<bits/stdc++.h>
using namespace std;
bool check(string s, int a, int b){
while(s[a] == s[b]){
    a++;
    b--;
}
return a>=b;
}
void palicount(string s)
{
    int l = s.size()-1;
    int st=0;
    while(l>st && s[st]==s[l]){
        st++;
        l--;
    }
    int i, j;
    for(i=st; i<l; i++) if(check(s, i, l)) break;
    for(j=l; j>st; j--) if(check(s, st, j)) break;

    cout<<s.substr(0, st)<<((j-st>l-i)?s.substr(st, j-st+1):s.substr(i, l-i+1))<<s.substr(l+1)<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        palicount(s);
    }
}
