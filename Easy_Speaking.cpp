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

bool isVowel(char c)
{
    return (c == 'i' || c ==  'o' || c == 'e' || c == 'a' || c == 'u');
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
        string s;
        cin >> n >> s;

        int cnt = 0;
        bool ok = false;

        for(int i = 0; i < n; i++)
        {
           if(!isVowel(s[i]))
           {
                cnt++;

                if(cnt >= 4)
                {
                    ok = true;
                    break;
                }
           }
           else
           {
                cnt = 0;
           }
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }

    return 0;
}
