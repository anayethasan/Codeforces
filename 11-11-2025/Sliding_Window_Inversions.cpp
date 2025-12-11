#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl cout << '\n';

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    ll l = 0, r = 0;
    vector<ll> ans;

    while (r < n)
    {
        if (r - l + 1 == k)  
        {
            ll cnt = 0;
            for (ll i = l; i <= r; i++)
            {
                for (ll j = i + 1; j <= r; j++)
                {
                    if (a[i] > a[j]) cnt++;
                }
            }
            ans.push_back(cnt);
            l++; 
        }
        r++;
    }

    for (auto val : ans) 
        cout << val << " ";
    nl;
    return 0;
}
