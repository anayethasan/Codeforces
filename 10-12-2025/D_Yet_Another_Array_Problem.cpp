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

ll gcd(ll a, ll b) {
    if(a % b == 0)
        return b;
    return gcd(b, a % b);    
}

bool isPrime(ll x)
{
    if(x <= 1)
        return false;
    
    for(int i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}

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
        
        ll g = 0; 
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            g = gcd(g, x);
        }

        ll p = 2;
        while(1)
        {
            if(g % p != 0)
            {
                cout << p << '\n';
                break;
            } 

            if(p == 2)
                p = 3;
            else
                p += 2;
            
            while(!isPrime(p))
                p += 2;
        }

    }

    return 0;
}

