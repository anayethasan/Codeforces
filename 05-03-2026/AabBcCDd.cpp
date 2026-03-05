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
        int n;
        string s;
        cin >> n >> s;
        
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++)
        {
            char ch = tolower(s[i]);
            freq[ch - 'a']++;
        }

        int mx1 = 0, mx2 = 0;

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > mx1)
            {
                mx2 = mx1;
                mx1 = freq[i];
            }
            else if(freq[i] > mx2)
            {
                mx2 = freq[i];
            }
        }

        cout << mx1 + mx2 << '\n';
    }

    return 0;
}
