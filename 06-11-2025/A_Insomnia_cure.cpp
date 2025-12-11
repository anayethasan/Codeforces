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

   int k, l, m, n, d;
   cin >> k >> l >> m >> n >> d;

   int ans = 0;
   for(int i = 1; i <= d; i++)
   {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            ans++;
   }
   cout << ans << '\n';

    return 0;
}
