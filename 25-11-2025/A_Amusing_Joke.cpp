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

    string host, gest, pile;
    cin >> host >> gest >> pile;

    string both = host + gest;

    if(both.size() != pile.size())
    {
        cout << "NO" << '\n';
        return 0;
    }

    bool ok = true;
    sort(both.begin(), both.end());
    sort(pile.begin(), pile.end());

    for(int i = 0; i < pile.size(); i++)
    {
        if(both[i] != pile[i])
        {
            ok = false;
            break;
        }
    }

    if(ok)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}
