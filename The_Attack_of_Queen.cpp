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
        ll n, x, y;
        cin >> n >> x >> y;

        ll row = n - 1;
        ll col = n - 1;

        ll ul, ur, bl, br;
        ul = min(x-1, y-1), ur = min(x-1, n-y);
        bl = min(n-x, y-1), br = min(n-x, n-y);

        cout << row + col + ul + ur + bl + br << '\n';
    }

    return 0;
}
