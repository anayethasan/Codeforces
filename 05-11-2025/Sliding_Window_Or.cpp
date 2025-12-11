// #include <bits/stdc++.h>
// using namespace std;

// /************************************************************
// *                                                          *
// *  "If talent doesn't work, believe in yourself and        *
// *   do hard work. Allah will give you the best gift."      *
// *                                                          *
// *************************************************************/

// #define ll long long
// #define hea cout << "YES\n";
// #define na cout << "NO\n";
// #define nl cout << '\n';

// int main() 
// {
//     ios::sync_with_stdio(0), cin.tie(0);

//     // sieve(); 

//     ll n, k;
//     cin >> n >> k;
//     ll x, a, b, c;
//     cin >> x >> a >> b >> c;

//     vector<int> ar(n);
//     ar[0] = x;
//     for(int i = 1; i < n; i++)
//     {
//         ar[i] = (a * ar[i - 1] + b) % c;
//     }

//     // ll l = 0, r = 0, ans = 0;
//     // while(r < n)
//     // {
//     //     ll sumOR = 0;
//     //     for(int i = l; i <= r && i < l+k; i++)
//     //         sumOR |= ar[i];
//     //     if(r - l + 1 ==  k)
//     //     {
//     //         ans ^= sumOR;
//     //         l++;
//     //     }
//     //     r++;
//     // }

//     // cout << ans << '\n';

//      ll ans = 0;
//     vector<int> bitCount(30, 0);

//     for(int i = 0; i < n; i++) 
//     {
//         for(int bit = 0; bit < 30; bit++)
//             if(ar[i] & (1LL << bit)) 
//                 bitCount[bit]++;

//         if(i >= k) 
//         {
//             for(int bit = 0; bit < 30; bit++)
//                 if(ar[i-k] & (1LL << bit)) 
//                     bitCount[bit]--;
//         }

//         if(i >= k-1) 
//         {
//             ll curOR = 0;
//             for(int bit = 0; bit < 30; bit++)
//                 if(bitCount[bit]) curOR |= (1LL << bit);
//             ans ^= curOR;
//         }
//     }

//     cout << ans << "\n";

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<ll> ar(n);
    ar[0] = x;
    for(int i = 1; i < n; i++)
        ar[i] = (a * ar[i-1] + b) % c;

    ll ans = 0;
    vector<int> bitCount(30, 0);

    for(int i = 0; i < n; i++) {
        // add new element
        for(int bit = 0; bit < 30; bit++)
            if(ar[i] & (1LL << bit)) bitCount[bit]++;

        // remove old element if window exceeded
        if(i >= k) {
            for(int bit = 0; bit < 30; bit++)
                if(ar[i-k] & (1LL << bit)) bitCount[bit]--;
        }

        // XOR the current window OR
        if(i >= k-1) {
            ll curOR = 0;
            for(int bit = 0; bit < 30; bit++)
                if(bitCount[bit]) curOR |= (1LL << bit);
            ans ^= curOR;
        }
    }

    cout << ans << "\n";
}
