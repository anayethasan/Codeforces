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

    string s;
    cin >> s;

    bool flag = true;
    for(int i = 0; i < s.size();)
    {
        if(i + 2 < s.size() && s.substr(i, 3) == "144")
        {
            i += 3;
        }
        else if(i + 1 < s.size() && s.substr(i, 2) == "14")
        {
            i += 2;
        }
        else if (s[i] == '1')
        {
            i += 1;
        }
        else
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << '\n';

    return 0;
}
