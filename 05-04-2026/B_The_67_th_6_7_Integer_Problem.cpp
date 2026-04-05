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
        int sum = 0, mx = -100;
        for(int i = 0; i < 7; i++)
        {
           int x;
           cin >> x;
           sum += x;
           mx = max(mx, x);
        }

        cout << (2 * mx - sum) << '\n';
    }

    return 0;
}
