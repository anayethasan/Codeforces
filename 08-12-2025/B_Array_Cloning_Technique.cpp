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

    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        ll mx = 1;
        map<ll, ll> mp;
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        if(mx == n)
            cout << 0 << '\n';
        else
        {
            ll ans = 0;
            while(n > mx)
            {
                ans += mx + 1;
                mx <<= 1;
            }
            ans += n - mx;
            cout << ans << '\n';
        }
    }

    return 0;
}
