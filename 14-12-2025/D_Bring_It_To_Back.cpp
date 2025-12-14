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
        ll n, m;
        cin >> n >> m;

        if (m == 0)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << '\n';
            continue;
        }


        ll mn = min(m, n - 1);
        for (int i = n; i > n - mn; i--)
        {
            cout << i << " ";
        }

        for (int i = 1; i <= n - mn; i++)
        {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}
