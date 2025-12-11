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
    string s;
    cin >> s;

    while(t--)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    cout << s << '\n';

    return 0;
}
