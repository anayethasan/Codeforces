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
        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i] == 2)
                cnt++;
        }

        if(cnt % 2 != 0)
        {
            cout << -1 << '\n';
            continue;
        }

        int rem = cnt / 2;
        int now = 0;

        if(rem == 0)
        {
            cout << 1 << '\n';
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            if(ar[i] == 2)
                now++;

            if(now == rem)
            {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}
