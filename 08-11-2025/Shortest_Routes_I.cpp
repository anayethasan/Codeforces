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
const ll INF = 1e18;
const int N = 1e5 + 10;

vector<pair<int, ll>> adj_list[N];
ll dist[N];

class cmp
{
public:
    bool operator()(pair<int, ll> a, pair<int, ll> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, cmp> pq;
    pq.push({src, 0});
    dist[src] = 0;

    while (!pq.empty())
    {
        auto par = pq.top();
        pq.pop();

        int node = par.first;
        ll cost = par.second;

        if (cost > dist[node])
            continue;

        for (auto child : adj_list[node])
        {
            int childN = child.first;
            ll childC = child.second;

            if (cost + childC < dist[childN])
            {
                dist[childN] = cost + childC;
                pq.push({childN, dist[childN]});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        adj_list[u].push_back({v, c}); // one-way
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    dijkstra(1);

    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    cout << '\n';

    return 0;
}



// import heapq
// import sys

// # ------------------------------------------------------------
// #  "If talent doesn't work, believe in yourself and
// #   do hard work. Allah will give you the best gift."
// # ------------------------------------------------------------

// # Fast I/O
// input = sys.stdin.readline

// INF = 10**18
// N = 10**5 + 10

// # adjacency list and distance array
// adj_list = [[] for _ in range(N)]
// dist = [INF] * N


// def dijkstra(src):
//     pq = []
//     heapq.heappush(pq, (0, src))  # (cost, node)
//     dist[src] = 0

//     while pq:
//         cost, node = heapq.heappop(pq)

//         if cost > dist[node]:
//             continue

//         for childN, childC in adj_list[node]:
//             if cost + childC < dist[childN]:
//                 dist[childN] = cost + childC
//                 heapq.heappush(pq, (dist[childN], childN))


// # ------------------ main ------------------
// if __name__ == "__main__":
//     n, e = map(int, input().split())

//     for _ in range(e):
//         u, v, c = map(int, input().split())
//         adj_list[u].append((v, c))  # one-way

//     for i in range(1, n + 1):
//         dist[i] = INF

//     dijkstra(1)

//     for i in range(1, n + 1):
//         print(dist[i], end=" ")
//     print()
