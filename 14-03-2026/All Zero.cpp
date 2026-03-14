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
        int a, b, c;
        cin >> a >> b >> c;

        if(c % 3 == 0 && b == 2*a + c/3)
            cout << "Yes" << '\n';
        else 
            cout << "No" << '\n';
    }

    return 0;
}
