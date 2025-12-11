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

    int n, t;
    cin >> n >> t;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int cur = 1;
    while(cur < t)
    {
        cur += ar[cur - 1];
    }

    if(cur == t)
        cout << "YES"  << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
