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

    set<int> st;
    int p;
    cin >> p;
    for(int i = 0; i < p; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }

    bool ok = true;
    for(int i = 1; i <= n; i++)
    {
        if(st.find(i) == st.end())
        {
            ok = false;
            break;
        }
    }
    
    cout << (ok ? "I become the guy." : "Oh, my keyboard!") << '\n';

    return 0;
}
