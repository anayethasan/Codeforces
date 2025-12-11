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

// const int N = 1005;
// char grid[N][N];
// bool vis[N][N];
// int level[N][N];

// vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// int n, m;

// bool vaild(int x, int y)
// {
//     return(x >= 0 && x < n && y >= 0 && y < m);
// }

// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     level[si][sj] = 0;
    
//     while(!q.empty())
//     {
//         auto par = q.front();
//         q.pop();

//         // cout << par.first << " " << par.second << '\n';
//         int x = par.first, y = par.second;
//         for(int i = 0; i < 4; i++)
//         {
//             int par_i = x + dir[i].first, par_j = y + dir[i].second;
//             if(vaild(par_i, par_j) && !vis[par_i][par_j])
//             {
//                 q.push({par_i, par_j});
//                 vis[par_i][par_j] = true;
//                 level[par_i][par_j] = level[x][y] + 1;
//             }
//         }
//     }
// }

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 
//     cin >> n >> m;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }

//     memset(vis, false, sizeof(vis));
//     int si, sj;
//     cin >> si >> sj;

//     bfs(si, sj);
//     int di, dj;
//     cin >> di >> dj;

//     cout << level[di][dj] << '\n';

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
#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

int n, m;
const int N = 1005;
char grid[N][N];
bool vis[N][N];
int parent[N][N];

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int x, int y)
{
    return(x >= 0 && x < n && y >= 0 && y < m);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = 0;

    while(!q.empty())
    {
        auto p = q.front();
        q.pop();

        int par_i = p.first, par_j = p.second;
        for(int i = 0; i < 4; i++)
        {
            int child_i = par_i + dir[i].first;
            int child_j = par_j + dir[i].second;

            if(valid(child_i, child_j) && !vis[child_i][child_j])
            {
                cout << child_i << " " << child_j << "\n";
                q.push({child_i, child_j});
                vis[child_i][child_j] = true;
                parent[child_i][child_j] = parent[par_i][par_j] + 1;
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);
    int di, dj;
    cin >> di >> dj;


    return 0;
}
