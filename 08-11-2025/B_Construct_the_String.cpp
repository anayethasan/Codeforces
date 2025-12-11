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
        int n, a, b;
        cin >> n >> a >> b;

        string ans;
        for(int i = 0; i < n; i++)
        {
            char ch = 'a' + (i % b);
            ans += ch;
        }

        cout << ans << '\n';
    }

    return 0;
}


// t = int(input())
// for _ in range(t):
//     n, a, b = map(int, input().split())  # n = string length, a = substring length, b = distinct letters
//     ans = ""
//     for i in range(n):
//         ch = chr(ord('a') + (i % b))  # b letters repeat
//         ans += ch
//     print(ans)
