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
const ll MOD = 1e9 + 7;

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 
    ll n;
    cin >> n;
    ll ans = 0, i = 1;
    while(i <= n)
    {
        ll div = n / i;
        ll j = n / div;
        ll cnt = j - i + 1;
        ll sum = (i + j) % MOD * cnt % MOD *  ((div % MOD)) % MOD;
        sum = sum * ((MOD + 1) / 2) % MOD;
        ans = (ans % MOD + sum % MOD) % MOD;
        i = j + 1;
    }

    cout << ans << '\n';

    return 0;
}
