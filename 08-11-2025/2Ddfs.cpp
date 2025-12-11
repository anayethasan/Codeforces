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

// char grid[1005][1005];
// bool vis[1005][1005];

// vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // R, L, U, D
// int n, m;

// bool valid(int x, int y)
// {
//     return(x >= 0 && x < n && y >= 0 && y < m);
// }

// void dfs(int si, int sj)
// {
//     cout << si << " " << sj << "\n";
//     vis[si][sj] = true;
//     for(int i = 0; i < 4; i++)
//     {
//         int x = si + dir[i].first, y = sj + dir[i].second;
//         if(valid(x, y) && !vis[x][y])
//             dfs(x, y);
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

//     dfs(si, sj);
//     nl;

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
const int N = 1005;
char grid[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};


bool valid(int x, int y)
{
    return(x >= 0 && x < n && y >= 0 && y < m);
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << "\n";
    vis[si][sj] = true;
    
    for(int i = 0; i < 4; i++)
    {
        int par_i = si + dir[i].first, par_j = sj + dir[i].second;
        if(valid(par_i, par_j) && !vis[par_i][par_j])
            dfs(par_i, par_j);
        
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
    int si, sj;
    cin >> si >> sj;

    dfs(si, sj);
    cout << '\n';

    return 0;
}
