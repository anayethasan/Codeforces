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
        ll c, k;
        cin >> c >> k;
        vector<ll> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        for(int i = 0; i < n; i++)
        {
            if(ar[i] <= c)
            {
                c += ar[i];
            }
            else
            {
                break;
            }
        }
        cout << c << '\n';
    }

    return 0;
}
