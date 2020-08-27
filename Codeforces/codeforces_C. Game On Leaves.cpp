#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> gr[2000];
ll level[2000];
ll parent[2000];
ll visited[2000];
void dfs(ll node, ll par)
{
    parent[node] = par;
    visited[node] = 1;
    for(auto child : gr[node]){
        if(!visited[child]){
            level[child] = level[node] +1;
            dfs(child, node);
        }
    }
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif // ONLINE_JUDGE

    ll t;
    cin>>n>>x;

    memset(level, 0, sizeof(level));
    memset(parent, 0, sizeof(parent));
    memset(visited, 0, sizeof(visited));

    for(auto &v : gr){
        ll u, v;
        cin>>u>>v;

        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    dfs(x, 0);

    ll no_of_nodes_on_level[2000] = {0};
    ll max_level = INT_MIN;
    for(ll i=0; i<= n; i++)
    {
        no_of_nodes_on_level[level[i]]++;
        if(max_level < level[i]){
            max_level = level[i];
        }
    }

    //Result
    ll ans =0;
    for(ll i= max_level; i>= 2; i--){
        ans += no_of_nodes_on_level[i];
    }
    ll chance;
    if(ans%2 != 0){
        chance =0; // asish starts
    }
    else{
        chance = 1; //ayush starts
    }
    //result print
    if(no_of_nodes_on_level[1] == 0 || no_of_nodes_on_level[1] == 1){
        cout<<"Ayush"<<endl;
    }
    else{
        if(no_of_nodes_on_level[1] %2 == 0){
            if(chance ==0){
                cout<<"Asish"<<endl;
            }
            else{
                cout<<"Ayush"<<endl;
            }
        }
        else{
            if(chance == 1){
                cout<<"Ayush"<<endl;
            }
            else{
                cout<<"Asish"<<endl;
            }
        }
    }
}
