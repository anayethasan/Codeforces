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
        int a, b, c;
        cin >> a >> b >> c;
        
        ll total = a + b + c;
        if(a > b)
            cout << "First" << '\n';
        else if(a < b)
            cout << "Second" << '\n';
        else
        {
            if(c % 2 != 0)
                cout << "First" << '\n';
            else
               cout << "Second" << '\n'; 
        }
    }

    return 0;
}
