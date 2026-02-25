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
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        string s;
        cin >> s;

        vector<int> ans;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                ans.push_back(ar[i]);
        }

        if(ans.size() < k)
        {
            cout << -1 << '\n';
            continue;
        }
        sort(ans.begin(), ans.end());
        ll total = 0;
        for(int i = 0; i < k; i++)
        {
            total += ans[i];
        }
        cout << total << '\n';
    }

    return 0;
}
