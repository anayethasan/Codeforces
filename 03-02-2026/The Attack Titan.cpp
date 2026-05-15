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

const ll mod = 1000000007;

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll outer = ((a % mod) * (b % mod)) % mod;
        ll inner = ((c % mod) * (d % mod)) % mod;

        cout << (outer - inner + mod) % mod << '\n';
    }

    return 0;
}
