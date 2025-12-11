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
        int n, m, k;
        cin >> n >> m >> k;

        for(int i = n; i >= k; i--)
        {
            cout << i << " ";
        }
        for(int i = k - 1; i >= m + 1; i--)
        {
            cout << i << " ";
        }
        for(int i = 1; i <= m; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }

    return 0;
}

