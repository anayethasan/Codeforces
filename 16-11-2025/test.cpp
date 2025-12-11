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

vector<int> twoSum(vector<int> &n, int tar)
{
    sort(n.begin(), n.end());
    vector<pair<int, int>> tem;
    vector<int> ans;
    for (int i = 0; i < n.size(); i++)
    {
        tem.push_back({i, n[i]});
    }
    

    // for(int i = 0; i < tem.size(); i++)
    // {
    //     cout << "value : " << tem[i].second << "-> " << " " << "index" << tem[i].first << "\n";
    // }
    // cout << '\n';

    int l = 0, r = tem.size() - 1;
    while (l < r)
    {
        long long sum = tem[l].second + tem[r].second;
        if (sum == tar)
        {
            ans.push_back(tem[l].first);
            ans.push_back(tem[r].first);
            return ans;
        }
        else if (sum < tar)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve();

    int x;
    cin >> x;
    ll tar;
    cin >> tar;
    vector<int> n(x);
    for(int i = 0; i < x; i++)
    {
        cin >> n[i];
    }

    // twoSum(n, tar);

    vector<int> ar = twoSum(n, tar);

    for(int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << '\n';

    return 0;
}



