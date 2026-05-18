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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar.rbegin(), ar.rend());

        int eli = 0, cluster = 0, l = 0;
        while(l < n && cluster < k)
        {
            int cnt = 1;
            while(l < n && ar[l] == ar[l + 1])
            {
                cnt++;
                l++;
            }
            eli += cnt;
            cluster++;
            l++;
        }
        cout << min(x, eli) << '\n';
    }

    return 0;
}
