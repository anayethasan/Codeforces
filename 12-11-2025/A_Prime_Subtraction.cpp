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


    int t;
    cin >> t;
    while (t--) 
    {
        ll x, y;
        cin >> x >> y;

        ll rem = x - y;

        if(rem == 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';    
    }

    return 0;
}