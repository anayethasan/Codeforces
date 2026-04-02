#include <bits/stdc++.h>
using namespace std;

/************************************************************
*                                                          *
*  "If talent doesn't work, believe in yourself and        *
*   do hard work. Allah will give you the best gift."      *
*                                                          *
*************************************************************/

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    return gcd(b, a % b);    
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

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
    string s;
    cin >> s;

    int cntA = count(s.begin(), s.end(), 'A'), cntB = n - cntA;
    if(cntA > cntB)
        cout << "Anton" << '\n';
    else if(cntA < cntB)
        cout << "Danik" << '\n';
    else 
        cout << "Friendship" << '\n';

    return 0;
}
