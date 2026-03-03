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
        int n, k, x;
        cin >> n >> k >> x;

        if(x != 1)
        {
            cout << "YES" << '\n';
            cout << n << '\n';
            for(int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            nl;
        }
        else if(n % 2 && k == 2 || k == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            cout << n / 2 << '\n';
            for(int i = 1; i < n/2; i++)
            {
                cout << 2 << " ";
            }
            cout << 2 + (n % 2) << '\n';
        }
    }

    return 0;
}
