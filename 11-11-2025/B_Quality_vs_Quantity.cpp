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
        vector<ll> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());

        ll l = 0, r = n - 1;
        ll blue = 0, red = 0, cnt_blue = 0, cnt_red = 0;
        bool ok = false;

        while(l < r)
        {
            blue += ar[l];
            cnt_blue += 1; 
            red += ar[r];
            cnt_red += 1;

            if (red > blue and cnt_red < cnt_blue)
            {
                ok = true;
                break;
            }

            l += 1;
            r -= 1;
        }

        if(ok)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }

    return 0;
}
