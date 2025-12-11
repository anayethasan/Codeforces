#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj_list[N];
bool vis[N];
int level[N];
int src_shop[N]; 

void bfs(vector<int> &shop)
{
    queue<int> q;
    for (int src : shop)
    {
        q.push(src);
        vis[src] = true;
        level[src] = 0;
        src_shop[src] = src; 
    }

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                level[child] = level[par] + 1;
                src_shop[child] = src_shop[par];
                q.push(child);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> shop(k);
    for (int i = 0; i < k; i++)
        cin >> shop[i];

    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(src_shop, -1, sizeof(src_shop));

    bfs(shop);

     for (int i = 1; i <= n; i++)
    {
        if (src_shop[i] == i) 
        {
            int mn = INT_MAX;
            for (int child : adj_list[i])
                if (src_shop[child] != i) 
                    mn = min(mn, level[child] + 1);

            cout << (mn == INT_MAX ? -1 : mn) << ' ';
        }
        else
            cout << level[i] << ' ';
    }
    cout << '\n';

    return 0;
}


