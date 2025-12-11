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

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 0; (1LL << i) <= n; i++)
    {
        ll cycle_len = 1LL << (i + 1);
        ll full_cycle = (n + 1) / cycle_len;
        ll one = full_cycle * (1LL << i);

        ll rem = (n + 1) % cycle_len;
        if(rem > (1LL << i))
            one += rem - (1LL << i);
        
        ans += one;
    }
    cout << ans << '\n';

    return 0;
}
