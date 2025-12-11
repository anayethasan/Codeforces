// #include <bits/stdc++.h>
// using namespace std;

// /************************************************************
// *                                                          *
// *  "If talent doesn't work, believe in yourself and        *
// *   do hard work. Allah will give you the best gift."      *
// *                                                          *
// *************************************************************/

// bool check_kth_bit_on_or_off(int n, int k) {
//     return ((n >> k) & 1);
// }

// int turn_on_kth_bit(int n, int k) {
//     return (n | (1 << k));
// }

// int turn_off_kth_bit(int n, int k) {
//     return (n & (~(1 << k)));
// }

// int toggle_kth_bit(int n, int k) {
//     return (n ^ (1 << k));
// }

// map<int, int> prime_factorization(int n) {
//     map<int, int> cnt;
//     for (int i = 2; i * i <= n; i++) {
//         while (n % i == 0) {
//             cnt[i]++;
//             n /= i;
//         }
//     }
//     if (n > 1) {
//         cnt[n]++;
//     }
//     return cnt;
// }

// bool is_prime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// const int MAXN = 1e5+5;
// vector<int> allPrime;
// vector<bool> prime(MAXN, true);

// void sieve() {
//     prime[0] = prime[1] = false;
//     for (int i = 2; i * i < MAXN; i++) {
//         if (prime[i]) {
//             for (int j = i * i; j < MAXN; j += i) {
//                 prime[j] = false;
//             }
//         }
//     }

//     for (int i = 2; i < MAXN; i++) {
//         if (prime[i]) allPrime.push_back(i);
//     }
// }

// int gcd(int a, int b) {
//     if(a % b == 0)
//         return b;
//     return gcd(b, a % b);    
// }

// int lcm(int a, int b) {
//     return (a / gcd(a, b)) * b;
// }

// #define ll long long
// #define hea cout << "YES\n";
// #define na cout << "NO\n";
// #define nl cout << '\n';

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 

//     int t;
//     cin >> t;
//     while (t--) 
//     {
        
//         int n;cin >> n;
//         vector<int> edj_list;
//         for(int i = 0; i < n -1; i++)
//         {

//         }

//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

int n;
vector<int> adj[21];
vector<pair<int, int>> edge_list;
vector<vector<int>> children;
vector<int> main_tree_post_order;

// DP tables
vector<vector<long long>> dp;
vector<long long> sum_dp_child;

void dfs_precompute(int u, int p) {
    for (int v : adj[u]) {
        if (v != p) {
            children[u].push_back(v);
            edge_list.push_back({u, v});
            dfs_precompute(v, u);
        }
    }
    main_tree_post_order.push_back(u);
}

void dp_on_comp(int u, const vector<vector<int>>& comp_children) {
    if (comp_children[u].empty()) {
        for (int v = 1; v <= n; ++v) {
            dp[u][v] = 1;
        }
        return;
    }

    for (int child : comp_children[u]) {
        dp_on_comp(child, comp_children);
    }

    for (int v = 1; v <= n; ++v) {
        dp[u][v] = 1;
    }

    for (int child : comp_children[u]) {
        // Calculate sum over descendants for the child's DP table
        fill(sum_dp_child.begin(), sum_dp_child.end(), 0);
        for (int node : main_tree_post_order) {
            sum_dp_child[node] = dp[child][node];
            for (int main_child : children[node]) {
                sum_dp_child[node] = (sum_dp_child[node] + sum_dp_child[main_child]) % MOD;
            }
        }
        // Update current node's DP table
        for (int v = 1; v <= n; ++v) {
            dp[u][v] = (dp[u][v] * sum_dp_child[v]) % MOD;
        }
    }
}

void solve() {
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        adj[i].clear();
        children[i].clear();
    }
    edge_list.clear();
    main_tree_post_order.clear();

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    dfs_precompute(1, 0);

    long long total_ways = 0;
    dp.assign(n + 1, vector<long long>(n + 1, 0));
    sum_dp_child.assign(n + 1, 0);

    for (int i = 0; i < (1 << (n - 1)); ++i) {
        vector<vector<int>> comp_children(n + 1);
        vector<int> in_degree(n + 1, 0);
        int set_bits = 0;

        for (int j = 0; j < n - 1; ++j) {
            if ((i >> j) & 1) {
                set_bits++;
                int u = edge_list[j].first;
                int v = edge_list[j].second;
                comp_children[u].push_back(v);
                in_degree[v]++;
            }
        }

        long long ways_for_mask = 1;

        for (int u = 1; u <= n; ++u) {
            if (in_degree[u] == 0) { // This `u` is a root of a component tree in G_S
                dp_on_comp(u, comp_children);
                
                long long comp_ways = 0;
                for (int v = 1; v <= n; ++v) {
                    comp_ways = (comp_ways + dp[u][v]) % MOD;
                }
                ways_for_mask = (ways_for_mask * comp_ways) % MOD;
            }
        }

        if (set_bits % 2 == 1) {
            total_ways = (total_ways - ways_for_mask + MOD) % MOD;
        } else {
            total_ways = (total_ways + ways_for_mask) % MOD;
        }
    }
    
    cout << total_ways << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}