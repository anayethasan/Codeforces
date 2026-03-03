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
       int n;
        cin >> n;

        vector<int> ar(n), br(n);

        for(int i = 0; i < n; i++)
            cin >> ar[i];

        for(int i = 0; i < n; i++)
            cin >> br[i];

        int sum = 0;
        int mn = 1e9;

        for(int i = 0; i < n; i++)
        {
            sum += ar[i];
            mn = min(mn, ar[i] - br[i]);
        }

        cout << sum - mn << '\n';
    }

    return 0;
}
