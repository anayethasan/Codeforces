
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

    ll n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<ll> ar(n+1);
    ar[1] = x;
    for(int i = 2; i <= n; i++)
    {
        ar[i] = (a * ar[i - 1] + b) % c;
    }

    vector<ll> pref(n+2), suff(n+2);
    suff[n+1] = 0;

    for(int i = 1; i <= n; i++)
    {
        if((i - 1) % k == 0)
            pref[i] = ar[i];
        else
            pref[i] = pref[i - 1] | ar[i];
    }

    for(int i = n; i >= 1; i--)
    {
        if(i % k == 0)
            suff[i] = ar[i];
        else 
            suff[i] = suff[i + 1] | ar[i];
    }

    ll ans = 0;
    for(int i = 1; i + k - 1 <= n; i++)
    {
        ans ^= (pref[i + k - 1] | suff[i]);
    }

    cout << ans << '\n';

    return 0;
}
