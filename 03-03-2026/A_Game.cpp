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
        int k;
        cin >> k;
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int alice = a1 + a2, bob = b1 + b2;
        int alice_round = 0, bob_round = 0;
        if(a1 > b1)
            alice_round++;
        else
            bob_round++;

        if(a2 > b2)
            alice_round++;
        else
            bob_round++;

        int bob_total = bob + k;
        int alice_total = alice;

        int new_bob_round = bob_round + 1;

        if(bob_total == alice_total && new_bob_round > alice_round)
            cout << "YES" << '\n';
        else if(bob_total > alice_total)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
