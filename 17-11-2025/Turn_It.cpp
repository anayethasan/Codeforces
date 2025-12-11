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
        float u, v, a, s;
        cin >> u >> v >> a >> s;

        float sum = sqrt((u*u) - (2*a*s));

        if(v < sum)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }

    return 0;
}
