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
        int n, m;
        cin >> n >> m;
        if(n % 2 != 0 && m % 2 != 0)
        {
            int row = (n/2)+1, col = (m/2)+1;
            cout << (row*col) << '\n';
        }
        else if(n % 2 == 0 && m % 2 != 0)
            cout << ((n/2)*(m+1)/2) << '\n';
        else if(n % 2 != 0 && m % 2 == 0)
            cout << ((n+1)/2*(m/2)) << '\n';
        else 
            cout << ((n/2)*(m/2)) << '\n';
    }       

    return 0;
}
