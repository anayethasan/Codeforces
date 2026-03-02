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
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        bool ok = true;

        for(int i = 0; i < n - 1; i++)
        {
            if(ar[i] > ar[i+1])
            {
                ok = false;
                break;
            }
        }

        if(!ok)
        {
            cout << 0 << '\n';
            continue;
        }

        ll ans = 1e18;
        for(int i = 0; i < n - 1; i++)
        {
            ll d = ar[i + 1] - ar[i];
            ll need = d / 2 + 1;
            ans = min(ans, need);
        }
        cout << ans << '\n';
    }

    return 0;
}
