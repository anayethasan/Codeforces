#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    return gcd(b, a % b);    
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

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
        vector<ll> ar(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        ll ans = 1;
        for(int i = 1; i < n; i++)
        {
            int g = ar[i] / gcd(ar[i], ar[i+1]);
            ans = ans / gcd(ans, g) * g;
            ar[i] /= g;
        }
        cout << ans << '\n';
    }

    return 0;
}
