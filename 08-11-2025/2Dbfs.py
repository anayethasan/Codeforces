from collections import deque

# ------------------------------------------------------------
#  "If talent doesn't work, believe in yourself and
#   do hard work. Allah will give you the best gift."
# ------------------------------------------------------------

# Global variables
N = 1005
grid = [['' for _ in range(N)] for _ in range(N)]
vis = [[False for _ in range(N)] for _ in range(N)]
parent = [[-1 for _ in range(N)] for _ in range(N)]

# Directions (right, left, up, down)
dir = [(0, 1), (0, -1), (-1, 0), (1, 0)]

def valid(x, y, n, m):
    return 0 <= x < n and 0 <= y < m

def bfs(si, sj, n, m):
    q = deque()
    q.append((si, sj))
    vis[si][sj] = True
    parent[si][sj] = 0

    while q:
        par_i, par_j = q.popleft()
        for dx, dy in dir:
            child_i = par_i + dx
            child_j = par_j + dy

            if valid(child_i, child_j, n, m) and not vis[child_i][child_j]:
                print(child_i, child_j)  # same as C++ cout
                q.append((child_i, child_j))
                vis[child_i][child_j] = True
                parent[child_i][child_j] = parent[par_i][par_j] + 1


# ------------------ main ------------------
if __name__ == "__main__":
    n, m = map(int, input().split())
    for i in range(n):
        row = list(input().strip())
        for j in range(m):
            grid[i][j] = row[j]

    # reset visited and parent arrays
    for i in range(n):
        for j in range(m):
            vis[i][j] = False
            parent[i][j] = -1

    si, sj = map(int, input().split())
    bfs(si, sj, n, m)

    di, dj = map(int, input().split())
