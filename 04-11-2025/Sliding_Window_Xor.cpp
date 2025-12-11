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

    ll n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<ll> ar(n);
    ar[0] = x;
    for(int i = 1; i < n; i++)
    {
        ar[i] = (a * ar[i - 1] + b) % c;
    }

    ll l = 0, r = 0, ans = 0;
    ll xorr = 0;

    while(r < n)
    {
        xorr ^= ar[r];
        if(r - l + 1 == k)
        {
            ans ^= xorr;
            xorr ^= ar[l];
            l++;
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}
