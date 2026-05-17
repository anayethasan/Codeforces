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
        int x;
        cin >> x;

        if(x <= 20)
            cout << (x * 10) << '\n';
        else
        {
            int res = (x - 20) * 5;
            cout << 20 * 10 + res / 2 << '\n';
        }
    }

    return 0;
}
