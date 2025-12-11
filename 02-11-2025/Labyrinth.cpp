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

// int n, m;
// char gird[1000+5][1000+5];
// bool vis[1000+5][1000+5];
// pair<int, int> parent[1000+5][1000+5];
// char moveDir[1000+5][1000+5];

// vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}}; 
// char dirCh[4] = {'U','D','L','R'};

// bool vaild(int x, int y)
// {
//     return(x >= 0 && x < n && y >= 0 && y < m && gird[x][y] != '#');
// }

// void bfs(int si, int sj)
// {
//     queue<pair<int, int>> q;
//     q.push({si, sj});
//     vis[si][sj] = true;
//     parent[si][sj] = {0, 0};

//     while(!q.empty())
//     {
//         auto par = q.front();
//         q.pop();

//         int x = par.first, y = par.second;

//         for(int i = 0; i < 4; i++)
//         {
//             int new_x = x + dir[i].first, new_y = y + dir[i].second;
//             if(vaild(new_x, new_y) && !vis[new_x][new_y])
//             {
//                 vis[new_x][new_y] = true;
//                 parent[new_x][new_y] = {x, y};
//                 moveDir[new_x][new_y] = dirCh[i];
//                 q.push({new_x, new_y});
//             }
//         }
//     }
// }

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 

//     cin >> n >> m;
//     int si, sj, di, dj;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cin >> gird[i][j];
//             if(gird[i][j] == 'A')
//                 si = i, sj = j;
//             else if(gird[i][j] == 'B')
//                 di = i, dj = j;
//         }
//     }

//     memset(vis, false, sizeof(vis));
//     memset(parent, -1, sizeof(parent));
//     bfs(si, sj);

//     if(!vis[di][dj])
//     {
//         cout << "NO" << '\n';
//         return 0;
//     }

//     string ans;
//     int x = di, y = dj;
//     while(!(x == si && y == sj))
//     {
//         ans += moveDir[x][y];
//         auto par = parent[x][y];
//         x = par.first, y = par.second;
//     }
//     reverse(ans.begin(), ans.end());
//     cout << "YES" << '\n';
//     cout << ans.size() << '\n';
//     cout << ans << '\n';

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
char grid[1000+5][1000+5];
bool vis[1000+5][1000+5];
pair<int, int> parent[1000+5][1000+5];
char movDir[1000+5][1000+5];

vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}}; 
char dirCh[4] = {'U','D','L','R'};

int n, m;
bool valid(int x, int y)
{
    return(x >= 0 && x < n && y < m && y >= 0 && grid[x][y] != '#');
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {0, 0};

    while(!q.empty())
    {
        auto par = q.front();
        q.pop();

        int x = par.first, y = par.second;

        for(int i = 0; i < 4; i++)
        {
            int new_x = x + dir[i].first, new_y = y + dir[i].second;
            if(valid(new_x,new_y) && !vis[new_x][new_y])
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
                parent[new_x][new_y] = {x, y};
                movDir[new_x][new_y] = dirCh[i];
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    cin >> n >> m;
    int si, sj, di, dj;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'A')
                si = i, sj = j;
            else if(grid[i][j] == 'B')
                di = i, dj = j;
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);

    if(!vis[di][dj])
    {
        cout << "NO" << '\n';
        return 0;
    }


    string ans;
    int x = di, y = dj;
    while(!(x == si && y == sj))
    {
        ans += movDir[x][y];
        auto par = parent[x][y];
        x = par.first, y = par.second;
    }
    reverse(ans.begin(), ans.end());
    cout << "YES" << '\n';
    cout << ans.size() << '\n';
    cout << ans << '\n';

    return 0;
}
