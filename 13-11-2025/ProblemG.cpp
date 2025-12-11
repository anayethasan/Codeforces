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
        string s;
        cin >> s;

        ll len = 0, cnt = 0;
        bool ok = false;

        int i = 0;
        while(i < s.size())
        {
            if(s[i] == '\\' && i + 1 < s.size() && s[i + 1] == '0')
            {
                cnt++;
                if(!ok)
                    ok = true;
                
                i += 2;
            }
            else
            {
                cnt++;
                if(!ok)
                    len++;
                
                i += 1;
            }
        }

        cout << cnt + 1 << " " << len << '\n';
    }

    return 0;
}
