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

        int cnt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'N')
                cnt++;
        }
        cout << (cnt == 1 ? "NO" : "YES") << '\n';
    }

    return 0;
}
