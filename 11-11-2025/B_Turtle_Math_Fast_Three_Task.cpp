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
        vector<int> ar(n);
        ll sum = 0, p = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];

            if(ar[i] % 3 == 1)
                p = 1;
        }   

        if(sum % 3 != 1)
            cout << (sum % 3 == 2) << '\n';
        else
            cout << 2 - p << '\n';
    }
    return 0;
}
