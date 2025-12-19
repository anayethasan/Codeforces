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
    int n;
    cin >> n;

    for(ll i = 1; i <= n; i++)
    {
        ll total = i * i * (i * i - 1) / 2;
        ll out = 0;
        if(i >= 3)
        {
            out = 4LL * (i - 1) * (i - 2);
        }
        cout << total - out << '\n';
    }
    
    return 0;
}
