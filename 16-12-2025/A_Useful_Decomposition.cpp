#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

bool check_kth_bit_on_or_off(int n, int k) {
    return ((n >> k) & 1);
}

int turn_on_kth_bit(int n, int k) {
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k) {
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k) {
    return (n ^ (1 << k));
}

map<int, int> prime_factorization(int n) {
    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cnt[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        cnt[n]++;
    }
    return cnt;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

const int MAXN = 1e5+5;
vector<int> allPrime;
vector<bool> prime(MAXN, true);

void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAXN; i++) {
        if (prime[i]) allPrime.push_back(i);
    }
}

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    return gcd(b, a % b);    
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

const int N = 1e5 + 10;
vector<int> adj_list[N];
bool vis[N];
int deg[N];

vector<pair<int, int>> path;
int cnter = -1;

void dfs(int u, int par, int start)
{
    bool leaf = true;
    for(auto node : adj_list[u])
    {
        if(node == par)
            continue;
        
        leaf = false;
        dfs(node, u, start);
    }

    if(leaf)
        path.push_back({start, u});
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int n;
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

        deg[u]++;
        deg[v]++;
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(deg[i] >= 3)
        {
            cnt++;
            cnter = i;
        }
    }

    if(cnt > 1)
    {
        cout << "No" << '\n';
        return 0;
    }

     if (cnter == -1)
    {
        int a = -1, b = -1;
        for (int i = 1; i <= n; i++)
        {
            if (deg[i] == 1)
            {
                if (a == -1) a = i;
                else b = i;
            }
        }

        cout << "Yes\n";
        cout << 1 << '\n';
        cout << a << " " << b << '\n';
    }
    else
    {
        for (auto val : adj_list[cnter])
        {
            dfs(val, cnter, cnter);
        }

        cout << "Yes\n";
        cout << path.size() << '\n';
        for (auto p : path)
            cout << p.first << " " << p.second << '\n';
    }


   return 0;
}
