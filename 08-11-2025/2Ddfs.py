# ------------------------------------------------------------
#  "If talent doesn't work, believe in yourself and
#   do hard work. Allah will give you the best gift."
# ------------------------------------------------------------

# Constants
N = 1005
grid = [['' for _ in range(N)] for _ in range(N)]
vis = [[False for _ in range(N)] for _ in range(N)]
dir = [(0, 1), (0, -1), (-1, 0), (1, 0)]  # directions: right, left, up, down

def valid(x, y, n, m):
    return 0 <= x < n and 0 <= y < m

def dfs(si, sj, n, m):
    print(si, sj)
    vis[si][sj] = True

    for dx, dy in dir:
        par_i = si + dx
        par_j = sj + dy
        if valid(par_i, par_j, n, m) and not vis[par_i][par_j]:
            dfs(par_i, par_j, n, m)


# ------------------ main ------------------
if __name__ == "__main__":
    n, m = map(int, input().split())

    for i in range(n):
        row = list(input().strip())
        for j in range(m):
            grid[i][j] = row[j]

    # reset visited array
    for i in range(n):
        for j in range(m):
            vis[i][j] = False

    si, sj = map(int, input().split())

    dfs(si, sj, n, m)
    print()
