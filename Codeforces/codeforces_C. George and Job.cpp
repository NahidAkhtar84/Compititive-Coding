 #include <iostream>
#define ll long long
using namespace std;
ll n,m,k,s[5005],d[5005][5005],i,j;
int main()
{
cin>>n>>m>>k;
for(i=1;i<=n;i++)cin>>s[i],s[i]+=s[i-1];

for(i=1;i<=n;i++)cout<<s[i]<<endl;
}
