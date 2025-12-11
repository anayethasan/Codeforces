#include <bits/stdc++.h>
using namespace std;

/************************************************************
*  "If talent doesn't work, believe in yourself and         *
*   do hard work. Allah will give you the best gift."       *
*************************************************************/

#define N 1005
char grid[N][N];
bool vis[N][N];
int n, m;
int mt[N][N];
int pt[N][N];
pair<int,int> parentCell[N][N];
char moveDir[N][N];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char dirCh[4] = {'U', 'D', 'L', 'R'};

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#');
}

void bfsM(queue<pair<int,int>> &q)
{
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(valid(nx, ny) && mt[nx][ny] == -1)
            {
                mt[nx][ny] = mt[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

bool bfsP(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si, sj});
    pt[si][sj] = 0;
    vis[si][sj] = true;
    parentCell[si][sj] = {-1, -1};

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == 0 || y == 0 || x == n-1 || y == m-1)
        {
            cout << "YES\n";
            string path = "";
            while(!(x == si && y == sj))
            {
                path += moveDir[x][y];
                auto p = parentCell[x][y];
                x = p.first;
                y = p.second;
            }
            reverse(path.begin(), path.end());
            cout << path.size() << "\n" << path << "\n";
            return true;
        }

        for(int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(valid(nx, ny) && !vis[nx][ny])
            {
                int nextTime = pt[x][y] + 1;

                // Only move if player reaches before monster or monster never comes
                if(mt[nx][ny] == -1 || nextTime < mt[nx][ny])
                {
                    vis[nx][ny] = true;
                    pt[nx][ny] = nextTime;
                    parentCell[nx][ny] = {x, y};
                    moveDir[nx][ny] = dirCh[k];
                    q.push({nx, ny});
                }
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    int si, sj;

    queue<pair<int,int>> mq;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            vis[i][j] = false;
            mt[i][j] = -1;
            pt[i][j] = -1;

            if(grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if(grid[i][j] == 'M')
            {
                mq.push({i, j});
                mt[i][j] = 0;
            }
        }
    }

    bfsM(mq);

    if(!bfsP(si, sj))
    {
        cout << "NO\n";
    }

    return 0;
}
