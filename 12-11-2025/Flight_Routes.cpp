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

const int N = 1e6;
const ll INF = 1e18;

vector<pair<ll, ll>> adj_list[N];
vector<ll> dist[N];
int n, m, k;

void dijkstra()
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, 1});
    dist[1].push_back(0);

    while(!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        ll cost = par.first;
        ll node = par.second;

        if(dist[node].size() == (size_t)k && cost > dist[node].back())
            continue;

        for(auto child : adj_list[node])
        {
            ll child_node = child.first;
            ll child_cost = child.second;
            ll new_cost = cost + child_cost;

            if(dist[child_node].size() < k)
            {
                dist[child_node].push_back(new_cost);
                sort(dist[child_node].begin(), dist[child_node].end());
                pq.push({new_cost, child_node});
            }
            else if(new_cost < dist[child_node].back())
            {
                dist[child_node].push_back(new_cost);
                sort(dist[child_node].begin(), dist[child_node].end());
                if(dist[child_node].size() > k)
                    dist[child_node].pop_back();
                pq.push({new_cost, child_node});
            }
        }
    }

    sort(dist[n].begin(), dist[n].end());
    for(size_t i = 0; i < dist[n].size() && i < (size_t)k; ++i)
    {
        if(i) cout << " ";
        cout << dist[n][i];
    }
    cout << '\n';
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c}); // directed
    }

    dijkstra();
    
    return 0;
}
