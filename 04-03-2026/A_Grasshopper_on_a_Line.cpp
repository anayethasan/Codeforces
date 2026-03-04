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
        int x, k;
        cin >> x >> k;

        if(x % k != 0)
        {
            cout << 1 << '\n';
            cout << x << '\n';
        }
        else
        {
            cout << 2 << '\n';
            cout << x - 1 << " " << 1 << '\n';
        }
    }

    return 0;
}
