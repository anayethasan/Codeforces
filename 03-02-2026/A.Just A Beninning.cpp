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

        // for(int i = 0; i < 3; i++)
        // {
        //     s[i] = toupper(s[i]);
        // }
        
        // if(s == "YES")
        //     cout << "YES" << '\n';
        // else
        //     cout << "NO" << '\n';

        if((s[0] == 'Y' || s[0] == 'y')
            && (s[1] == 'E' || s[1] == 'e')
            && (s[2] == 'S' || s[2] == 's')
        )
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
