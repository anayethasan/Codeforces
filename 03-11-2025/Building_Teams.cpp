// #include <bits/stdc++.h>
// using namespace std;

// /************************************************************
// *                                                          *
// *  "If talent doesn't work, believe in yourself and        *
// *   do hard work. Allah will give you the best gift."      *
// *                                                          *
// *************************************************************/
// #define ll long long
// #define hea cout << "YES\n";
// #define na cout << "NO\n";
// #define nl cout << '\n';

// const int maxN = 1e6+2;
// vector<int> adj_list[maxN];
// int team[maxN];
// bool flag = true;

// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     team[src] = 1;

//     while(!q.empty())
//     {
//         auto par = q.front();
//         q.pop();

//         for(auto child : adj_list[par])
//         {
//             if(team[child] == 0)
//             {
//                 if(team[par] == 1)
//                     team[child] = 2;
//                 else 
//                     team[child] = 1;
//             }
//             else if(team[child] == team[par])
//             {
//                 flag = false;
//             }
//         }
//     }
// }

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 
//     int n, m;
//     cin >> n >> m;
//     while(m--)
//     {
//         int u, v; cin >> u >> v;
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
//     }

//     memset(team, 0, sizeof(team));

//     for(int i = 1; i <= n; i++)
//     {
//         if(team[i] == 0)
//             bfs(i);
//     }

//     if(!flag)
//     {
//         cout << "IMPOSSIBLE" << '\n';
//     }
//     else
//     {
//         for(int i = 1; i <= n; i++)
//         {
//             cout << team[i] << " ";
//         }
//         nl
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/
const int maxN = 1e6+5;
vector<int> adj_list[maxN];
int team[maxN];
bool flag = true;

void dfs(int node, int src)
{
    team[node] = src;

    for(auto child : adj_list[node])
    {
        if(team[child] == 0)
        {
            if(src == 1)
                dfs(child, 2);
            else
                dfs(child, 1);
        }
        else if(team[child] == src)
            flag = false;
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

    memset(team, 0, sizeof(team));

    for(int i = 1; i <= n; i++)
    {
        if(team[i] == 0)
            dfs(i, 1);
    }

    if(!flag)
    {
        cout << "IMPOSSIBLE" << '\n';
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            cout << team[i] << " ";
        }
        cout << '\n';
    }
    

    return 0;
}

