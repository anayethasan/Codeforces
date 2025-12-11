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

    if (n == 1)
        cout << 8000 << '\n';
    else if (n == 2)
        cout << 4000 << '\n';
    else if (n == 3)
        cout << 2000 << '\n';
    else
        cout << 1000 << '\n';

    return 0;
}
