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
        string s1, s2;
        cin >> s1 >> s2;
        vector<int> freq1(26), freq2(26);

        if(s1.size() != s2.size())
        {
            cout << "NO" << '\n';
            continue;
        }

        for(int i = 0; i < s1.size(); i++)
        {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
