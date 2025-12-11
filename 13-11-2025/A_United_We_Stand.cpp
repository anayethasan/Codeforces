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
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar.begin(), ar.end());
        
        vector<int> b, c;
        int mn = ar[0];
        for(int i = 0; i < n; i++)
        {
            if(mn == ar[i])
                b.push_back(ar[i]);
            else 
                c.push_back(ar[i]);
        }


        if(c.empty())
        {
            cout << -1 << '\n';
            continue;
        }
            cout << b.size() << " " << c.size() << '\n';
            for(auto val : b)
                cout << val << " ";
            cout << '\n';

            for(auto val : c)
                cout << val << " ";
            cout << '\n';
        
    }

    return 0;
}
