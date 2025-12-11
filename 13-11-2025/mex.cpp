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

    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<bool> freq(n+5, false);
    for(int val : ar)
    {
        if(val >= 0 && val <= n)
        {
            freq[val] = true;
        }
    }

    int ans = 0;
    for(int i = 0; i <= n +1; i++)
    {
        if(!freq[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';

    return 0;
}
