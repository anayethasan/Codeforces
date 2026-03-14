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
        vector<vector<int>> ar(n, vector<int>(n));
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
                mp[ar[i][j]]++;
            }
        }
        
        int mx = 0;
        for(auto val: mp)
            mx = max(mx, val.second);

        cout << ((mx > n * (n - 1) ? "NO": "YES")) << '\n';
    }

    return 0;
}
