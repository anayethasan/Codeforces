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
    vector<ll> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll l = 0, r = 0;
    map<ll, ll> mp;
    vector<ll> ans;
    while(r < n)
    {
        mp[ar[r]]++;
        if(r - l + 1 == k)
        {
            ans.push_back(mp.size());
            mp[ar[l]]--;
            if(mp[ar[l]] == 0)
            {
                mp.erase(ar[l]);
            }
            l++;
        }
        r++;
    }

    for(auto val : ans)
        cout << val << ' ';
    cout << '\n';

    return 0;
}
