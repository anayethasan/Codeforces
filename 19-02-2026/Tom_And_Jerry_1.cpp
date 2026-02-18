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

void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int dis = abs(a - c) + abs(b - d);
    if(dis > k)
    {
        cout << "NO" << '\n';
    }
    else if((k - dis) % 2 == 0)
    {
        cout << "YES" << '\n';
    }
    else 
    {
        cout << "NO" << '\n';
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
