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

class Edge
{
    public:
    int u, v;
    ll c;
    Edge(int u, int v, ll c)
    {
        this->c = c;
        this->u = u;
        this->v = v;
    }
};

const int N = 1e9, inf = 1e9;
int dis[N];
int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    int n, m;
    cin >> n >> m;
    vector<Edge> edge_list;
    while(m--)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        edge_list.pop_back( Edge(u, v, c));
    }

    for(int i = 0; i <= n; i++)
    {
        dis[i] = inf;
    }

    dis[0] = 0;

    for(Edge ed : edge_list)
    {
        int u, v;
        ll c;
        u = ed.u;
        v = ed.v;
        c = ed.c;

        if(dis[u] < inf && dis[u] + c < dis[v])
        {
            dis[v] = dis[u] + c;
        }
    }



    return 0;
}
