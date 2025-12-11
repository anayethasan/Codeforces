#include <bits/stdc++.h>
using namespace std;

/************************************************************
 *                                                          *
 *  "If talent doesn't work, believe in yourself and        *
 *   do hard work. Allah will give you the best gift."      *
 *                                                          *
 *************************************************************/

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}

map<int, int> prime_factorization(int n)
{
    map<int, int> cnt;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cnt[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        cnt[n]++;
    }
    return cnt;
}

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

const int MAXN = 1e5 + 5;
vector<int> allPrime;
vector<bool> prime(MAXN, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAXN; i++)
    {
        if (prime[i])
            allPrime.push_back(i);
    }
}

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve();

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int purngre = 2024;

        vector<ll> row_xors(n, 0);
        vector<ll> col_xors(m, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int val;
                cin >> val;
                row_xors[i] ^= val;
                col_xors[j] ^= val;
            }
        }

        ll initial_danger = 0;
        for (ll x : row_xors)
        {
            initial_danger += x;
        }
        for (ll x : col_xors)
        {
            initial_danger += x;
        }

        ll min_danger = initial_danger;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                ll r_i = row_xors[i];
                ll c_j = col_xors[j];
                ll candidate = initial_danger - r_i - c_j + (r_i ^ c_j);
                if (candidate < min_danger)
                {
                    min_danger = candidate;
                }
            }
        }

        cout << min_danger << "\n";
    }

    return 0;
}
