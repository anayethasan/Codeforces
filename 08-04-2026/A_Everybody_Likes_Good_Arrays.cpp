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
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar[i] = x % 2;
        }

        int cnt = 0;
        for(int i = 0; i < n -1; i++)
        {
            if(ar[i] == ar[i+1])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
