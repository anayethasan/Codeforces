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
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int ans = 0, steak = 0;
        for(int i = 0; i < n; i++)
        {
            if(ar[i] > 0)
            {
                steak++;
                ans = max(ans, steak);
            }
            else
            {
                steak = 0;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
