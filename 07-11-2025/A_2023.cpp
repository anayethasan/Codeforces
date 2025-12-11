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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);

        ll cnt = 1;
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            cnt *= ar[i];
        }

        if(2023 % cnt != 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            ll rem = 2023 / cnt;
            cout << rem << " ";
            for(int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
