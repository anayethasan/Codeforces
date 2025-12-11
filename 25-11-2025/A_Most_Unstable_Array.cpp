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

        if(n == 1)
        {
            cout << 0 << '\n';
        }
        else if(n == 2)
        {
            cout << m << '\n';
        }
        else
        {
            cout << 2 * m  << '\n';
        }
    }

    return 0;
}
