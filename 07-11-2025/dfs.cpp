#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/
#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

const int N = 1005;
vector<int> adj_list[N];
bool vis[N];

void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;
    for(int child : adj_list[src])
    {
        if(!vis[child])
            dfs(child);
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    memset(vis,  false, sizeof(vis));
    dfs(0);
    
    return 0;
}
