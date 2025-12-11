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
        string s1, s2;
        cin >> s1 >> s2;

        int ans = 0;
        for(int i = 0; i < s2.size(); i++)
        {
            if(s2[i] == '1')
            {
                if(s1[i] == '0')
                {
                    ans++;
                }
                else
                {
                    if(i != 0 && s1[i - 1] == '1')
                    {
                        ans++;
                        s1[i - 1] = '0';
                    }
                    else if(i != n - 1 && s1[i + 1] == '1')
                    {
                        ans++;
                        s1[i+1] = '0';
                    }
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
