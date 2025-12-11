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

ll dist(ll x1, ll y1, ll x2, ll y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        ll n, m, i, j;
        cin >> n >> m >> i >> j;

        ll di = dist(i, j, 1, 1) + dist(i, j, n, m);
        ll dj = dist(i, j, 1, m) + dist(i, j, n, 1);

        if(di < dj)
            cout << 1 << " " << 1 << " " << n << " " << m << '\n';
        else
            cout << 1 << " " << m << " " << n << " " << 1 << '\n';
    }

    return 0;
}
