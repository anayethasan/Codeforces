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

    ll n , k;
    cin >> n >> k;
    vector<ll> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll l = 0, r = 0, cost = 0;
    while(r < n)
    {
        if(r - l + 1 == k)
        {
            vector<int> ans;
            for(int i = l; i <= r; i++)
            {
                ans.push_back(ar[i]);
            }
            sort(ans.begin(), ans.end());
            ll mid = ans[k/2];
            ll cost = 0;
            for(int i = 0; i < k; i++)
            {
                cost += abs(ans[i] - mid);
            }
            cout << cost << ' ';
            l++;
        }
        r++;
    }
    cout << '\n';

    return 0;
}
