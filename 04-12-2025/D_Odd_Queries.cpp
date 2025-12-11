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
        int n, q;
        cin >> n >> q;
        vector<int> ar(n+1);
        vector<int> pref(n+1);

        ll sum = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
            pref[i] = pref[i - 1] + ar[i];
        }

        while(q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll len = r - l + 1;
            ll segSum = pref[r] - pref[l - 1];
            ll total = sum + segSum + len * k;
            if(total % 2 != 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }

    return 0;
}
