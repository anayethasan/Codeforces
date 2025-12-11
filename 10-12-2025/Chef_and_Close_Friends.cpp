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
        int x, y, z;
        cin >> x >> y >> z;

        int l1 = (x - y), l2 = (x - z);
        int r1 =(x + z), r2 = (x + y);

        int l = max(l1, l2);
        int r = min(r1, r2);

        if(l > r)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = r - l + 1;
        if(l <= x && r >= x)
            ans--;
        cout << ans << '\n';
    }

    return 0;
}
