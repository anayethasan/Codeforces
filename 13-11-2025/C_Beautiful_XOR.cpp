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
        ll x, y;
        cin >> x >> y;

        if(x == y)
        {
            cout << 0 << "\n"; 
        }
        else if((x ^ y) <= x)
        {
            cout << 1 << "\n" << (x ^ y) << "\n";
        }
        else if(y <= x)
        {
            cout << 2 << "\n" << y << " " << x << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
