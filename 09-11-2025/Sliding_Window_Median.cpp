#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
using namespace std;
 
template <typename T>
using pbds = tree<T, null_type, less<T>,
rb_tree_tag, tree_order_statistics_node_update>;

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
    pbds<pair<ll, ll>> p;
    while(r < n)
    {
        p.insert({ar[r], r});
        if(r - l + 1 == k)
        {
            ll pos = k / 2;
            if(k % 2 == 0)
            {
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({ar[l], l});
            l++;
        }
        r++;
    }

    return 0;
}
