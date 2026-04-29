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
char gird[1005][1005];
bool vis[1005][1005];

vector<int> dir[4] = {{0,1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m || gird[x][y] == '#')
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++)
    {
        int ni = si + dir[i][0];
        int nj = sj + dir[i][1];

        if(valid(ni, nj) && !vis[ni][nj])
            dfs(ni, nj);
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
            cin >> gird[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!vis[i][j] && gird[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}
