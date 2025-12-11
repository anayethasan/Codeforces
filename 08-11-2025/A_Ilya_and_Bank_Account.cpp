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

    ll n;
    cin >> n;

    if(n >= 0)
    {
        cout << n << '\n';
    }
    else
    {
        ll rem = n / 10;
        ll digt = n % 10;

        ll rem_seclast = (n / 100) * 10 + digt;
        cout << max(rem, rem_seclast) << '\n';
    }

    return 0;
}
