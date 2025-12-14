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

        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero = 0, one = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                zero++;
            else
                one++;
        }

        cout << abs(one - zero) << '\n';

    return 0;
}
