#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define hea cout << "YES\n";
#define na cout << "NO\n";
#define nl cout << '\n';

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> ar(n);
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    ll l = 0, r = 0;
    vector<ll> ans;
    map<ll, ll> mp;

    while(r < n)
    {
        mp[ar[r]]++; 

        if(r - l + 1 == k)
        {
            ll maxfreq = 0;
            ll mn = LLONG_MAX;

            for(auto &it : mp)
            {
                ll val = it.first;
                ll freq = it.second;

                if(freq > maxfreq || (freq == maxfreq && val < mn))
                {
                    maxfreq = freq;
                    mn = val;
                }
            }

            ans.push_back(mn); 

            mp[ar[l]]--;
            if(mp[ar[l]] == 0)
                mp.erase(ar[l]);
            l++;
        }

        r++;
    }

    for(auto val : ans)
        cout << val << " ";
    cout << '\n';

    return 0;
}
