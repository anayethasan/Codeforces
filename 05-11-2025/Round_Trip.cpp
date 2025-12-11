#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/
int n, m;
int sv, ev;
const int N = 1e5+10;
vector<int> adj_list[N];
bool vis[N];
int parent[N];

bool dfs(int u, int p)
{
    vis[u] = true;
    parent[u] = p;

    for(auto child : adj_list[u])
    {
        vis[u] = true;
        parent[u] = p;

        if(child == p)
            continue;

        if(vis[child])
        {
            sv = child;
            ev = u;
            return true;
        }

        if(!vis[child])
        {
            if(dfs(child, u))
                return true;
        }
    }
    return false;
}

bool check_visitall()
{
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
            if(dfs(i, -1))
                return true;
    }
    return false;
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    cin >> n >> m;
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    if(!check_visitall())
    {
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    
    int temp = ev;
    vector<int> ans;
    ans.push_back(ev);

    while(temp != sv)
    {
        ans.push_back(parent[temp]);
        temp = parent[temp];
    }

    ans.push_back(ev);
    cout << ans.size() << '\n';

    for(auto val : ans)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}
