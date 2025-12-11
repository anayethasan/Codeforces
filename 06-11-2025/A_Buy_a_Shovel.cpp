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

    int k, r;
    cin >> k >> r;

    for(int i = 1; i <= 10; i++)
    {
        int total = i * k;
        if(total % 10 == 0 || total % 10 == r)
        {
            cout << i << '\n';
            return 0;
        }    

    }

    return 0;
}
