#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p, f, cnts, cntw, s, w, ans=0;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        if(s > w){
            swap(s, w);
            swap(cnts, cntw);
        }
        for(int i = 0; i<=cnts; i++){
            if(i <= p/s){
                int px=p,fx=f,res;
                px = px - (i*s);
                int m = min(cnts -i, (f/s));
                res = i + m;
                fx = fx- (m*s);
                res = res + min((fx/w+px/w), cntw);
                ans = max(ans, res);
            }
        }
        cout<<ans<<endl;
    }
}
