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

void niloy()
{
    int n;
    cin >> n;
    vector<ll> br(n);
    for(int i = 0; i < n; i++)
        cin >> br[i];

    vector<ll> ar;
    ar.push_back(br[0]);
    for(int i = 1; i < n; i++)
    {
        if(br[i] >= br[i-1])
        {
            ar.push_back(br[i]);
        }
        else
        {
            ar.push_back(br[i]);
            ar.push_back(br[i]);
        }
    }

    cout << ar.size() << '\n';
    for(auto val : ar)
        cout << val << " ";
    nl;
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    // sieve(); 

    int t;
    cin >> t;
    while (t--) 
    {
        niloy();
    }

    return 0;
}
