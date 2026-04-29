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

vector<int> adj_list[1000002];
int parent[1000002];
int level[1000002];
bool vis[1000002];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        auto par = q.front();
        q.pop();

        for(auto child : adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                level[child] = level[par] + 1;
                parent[child] = par;
                vis[child] = true;
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    int n, m;
    cin >> n >> m;

    while(m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    memset(level, -1, sizeof(level));

    bfs(1);

    if(!vis[n])
    {
        cout << "impossible" << '\n';
        return 0;
    }

    int node = n;
    vector<int> ans;
    while(node != -1)
    {
        ans.push_back(node);
        node = parent[node];
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto val : ans)
        cout << val << " ";
    nl;

    return 0;
}
