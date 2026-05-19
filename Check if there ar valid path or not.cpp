class Solution {
public:
    bool vis[305][3005];
    int n, m;
    vector<vector<pair<int, int>>> dir = {
        {},
        {{0, -1}, {0, 1}},
        {{-1, 0}, {1, 0}},
        {{0, -1}, {1, 0}},
        {{0, 1}, {1, 0}},
        {{0, -1}, {-1, 0}},
        {{0, 1}, {-1, 0}}
    };

    bool valid(int i, int j)
    {
        if(i < 0 || i >= n  || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(vector<vector<int>>& grid, int x, int y)
    {
        vis[x][y] = true;

        for(auto d : dir[grid[x][y]])
        {
            int dx = d.first;
            int dy = d.second;
            int nx = x + d.first;
            int ny = y + d.second;

            if(!valid(nx, ny))
                continue;
            
            if(vis[nx][ny])
                continue;

            bool ok = false;

            for(auto nd: dir[grid[nx][ny]])
            {
                if(nd.first == -dx && nd.second == -dy)
                    ok = true;
            }

            if(ok)
                dfs(grid, nx, ny);
        }
    }

    bool hasValidPath(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        memset(vis, false, sizeof(vis));
        dfs(grid, 0, 0);

        return vis[n-1][m-1];
    }
};